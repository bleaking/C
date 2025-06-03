#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
int main(int argc, char* argv){
	printf("PID = %d\n",(int)getpid());
	printf("PID = %d\n",(int)getppid());
	pid_t pid;
	if((pid=fork())==-1){
		printf("fork did not worked\n");
	}
	if(pid>0){
		printf("Parent process\n");
	}else{
		sleep(2);
		printf("PID of child = %d\n",(int)getpid());
		printf("PPID of child = %d\n",(int)getppid());
	}
	return 0;
}
