#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/wait.h>
#include<pthread.h>

void* forking(void*);
static pthread_t tid;
static pid_t pid;
void* retval;
char* command="ls";

int main(int argc, char* argv[]){
	printf(" !!! Main procesS !!! \n");
	printf("pid of main %d\n",(int)getpid());
	printf("tid of main thread %d\n",(int)pthread_self());
	printf("pid = %d\n",(int)getpid());
	int signal;
	printf("-|-|-|-|-|-|-|-|-|-\n");
	signal=pthread_create(&tid,NULL,forking,NULL);
	
	if(signal!=0){
		printf("thread could not created\n");
		return 0;
	}
	pthread_join(tid,&retval);
	
	printf("main process\n");
	printf("tid in main %d\n",(int)tid);
	return 0;
}
void* forking(void* arg){
	printf("~~~~~~thread~~~~~~\n");
	pid=fork();
	printf("\\\\\\\\ forked \\\\\\\\\ \n");
	if(pid==-1){
		printf("Error forking\n");
	}else if(pid==0){
		printf("Child born\n");
		printf("child's pid = %d\n",(int)getpid());
		printf("tid in child = %d\n",(int)pthread_self());
		execlp("/home/uppercase/Desktop/mydesk/pthread/new","new",NULL);
		printf("pid after execv %d\n",(int)getpid());
		printf("tid after execv %d\n",(int)pthread_self());
	}else{
		int p;
		wait(&p);
		printf("parent sustains\n");
		printf("parent's pid = %d\n",(int)getpid());
		printf("tid in parent = %d\n",(int)pthread_self());
	}
	return NULL;;
}
