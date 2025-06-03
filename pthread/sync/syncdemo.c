#include<stdio.h>
#include<pthread.h>
#include<stdlib.h>

void* first(void*);
static volatile int x=0;
void* retval;
static pthread_mutex_t mtx=PTHREAD_MUTEX_INITIALIZER;
int main(int argc, char* argv[]){
	if(argc==1){
		printf("Correct usage: <command> <number> \n");
		return 0;
	}
	int nol=atoi(argv[1]);
	pthread_t tid0,tid1;
	pthread_create(&tid0,NULL,first,&nol);
	pthread_create(&tid1,NULL,first,&nol);
	pthread_join(tid0,&retval);
	pthread_join(tid0,&retval);
	printf("x=%d\n",x);
	pthread_exit(&retval);
}
void* first(void* arg){
	int n=*((int*)arg);
	for(int i=1;i<=n;i++){
		pthread_mutex_lock(&mtx);
		int a=x;
		a++;
		x=a;
		pthread_mutex_unlock(&mtx);
	}
	return NULL;
}
