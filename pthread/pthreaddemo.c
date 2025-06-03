#include<stdio.h>
#include<pthread.h>

void* mytask(void);
void* mytask1(void);

int main(int argc, char* argv[]){
	printf("Main thread started \n");
	int arg,arg1;
	pthread_t tid,tid1;
	if(pthread_create(&tid,NULL,mytask(),&arg)){
		printf("Thread would not be created \n");
	}else{
		//pthread_join(tid,arg);
	}
	if(pthread_create(&tid1,NULL,mytask1(),&arg1)){
		printf("thread would not be create \n");
	}else{
		//pthread_join(tid1,arg1);
	}
	printf("Main thread end\n");
	return 0;
}
void* mytask(void){
	for(int i=0;i<500;i++){
		printf("%d\t",i);
	}
	printf("\n");

}

void* mytask1(void){
	int sum=0;
	for(int i=0;i<=5000;i++){
		sum=sum+i;
	}
	printf("sum=%d\n",sum);
}
