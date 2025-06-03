#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/types.h>
#include<sys/wait.h>
int main(int argc,char* argv[]){
	pid_t pid;
	switch(pid=vfork()){
		case -1:
			printf("could not fork\n");
			printf("%d\n",(int)getpid());
			break;
		case 0:
			printf("child process\n");
			execlp("/bin/ls","ls","-l",NULL);
			break;
		default:
			wait(NULL);
			printf("parent process\n");
	}
	printf("End of process\n");
	return 0;
}
