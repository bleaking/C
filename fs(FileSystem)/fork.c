#include<stdio.h>
#include<unistd.h>
#include<sys/wait.h>
#include<sys/types.h>
int main(int argc, char* argv[]){
	int x=10;
	int k;
	printf("Entering main\n");
	printf("forking.....\n");
	pid_t pid=fork();
	if(pid==-1){
		printf("fork did not work\n");
	}else if(pid==0){
		execl("/bin/ls","l",NULL);
	}else{
		wait(&k);
		printf("parent process\n");
		printf("%d\n",(int)pid);
	}
	printf("Ending main\n");
}

