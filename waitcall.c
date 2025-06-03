#include<stdio.h>
#include<sys/wait.h>
#include<unistd.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
	printf("main started\n\n");
	pid_t pid=fork();
	if(pid==0){
		printf("child process\n");
		printf("process id=%d\n",(int)getpid());
		printf("parent process id=%d\n",(int)getppid());
	}else{
		int status;
		wait(&status);
		printf("parent process\n");
		printf("process id of parent=%d\n",(int)getpid());
		printf("status code of child=%d\n",status);
	}
	printf("end of main\n\n");
	_exit(20);
}
