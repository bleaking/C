#include <stdio.h>
#include <unistd.h>
int main(int argc, char* argv[]){
	printf("Main begins \n");
	printf("\n");
	pid_t pid = fork();
	if(pid==0){
		execl("/bin/ls","",(char*)NULL);
	}else{
		printf("I am parent\n");
		printf("pid of parend = %d \n",(int)pid);
		printf("process id=%d\n",(int)getpid());
	}
	printf("End of main\n");
	return 0;
}

