#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void* first(void*);
static volatile int x=0;
void* retval;
static pthread_mutex_t mtx=PTHREAD_MUTEX_INITIALIZER;
static pthread_mutex_t mtx0=PTHREAD_MUTEX_INITIALIZER;
pthread_t tid0,tid1;

int main(int argc, char* argv[]){
	if(argc==1){
		printf("Correct usage: <command> <number> \n");
		return 0;
	}
	int nol=atoi(argv[1]);
	pthread_create(&tid0,NULL,first,&nol);
	pthread_create(&tid1,NULL,first,&nol);
	pthread_join(tid0,&retval);
	pthread_join(tid1,&retval);
	printf("x=%d\n",x);
	pthread_exit(&retval);
}
void* first(void* arg){
	int n=*((int*)arg);
	for(int i=1;i<=n;i++){
		if(pthread_equal(tid0,pthread_self())){
			pthread_mutex_lock(&mtx);
		}else{
			pthread_mutex_lock(&mtx0);
		}
		int a=x;
		a++;
		x=a;
		if(i==5000){
			if(pthread_equal(tid0,pthread_self())){
				pthread_mutex_lock(&mtx0);
			}else{
				pthread_mutex_lock(&mtx);
			}
		}
		if(i==n-10){
			if(pthread_equal(tid0,pthread_self())){
				pthread_mutex_unlock(&mtx0);
			}else{
				pthread_mutex_unlock(&mtx);
			}
		}
		if(pthread_equal(tid0,pthread_self())){
			pthread_mutex_unlock(&mtx);
		}else{
			pthread_mutex_unlock(&mtx0);
		}
	}
	return NULL;
}
