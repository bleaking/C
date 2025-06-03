#include<signal.h>
#include<libgen.h>
#include<stdlib.h>
#include<stdio.h>
#include<unistd.h>
#include<sys/types.h>

#define CMD_SIZE 200

int main(int argc, char *argv[]){
	char cmd[CMD_SIZE];
	pid_t ChildPid;

	setbuf(stdout,NULL);

	printf("Parent PID = %ld\n",(long)getpid());

	switch(ChildPid = fork()){
		case -1:
			printf("Did not forked\n");
			_exit(EXIT_SUCCESS);
		case 0:
			printf("child (PID = %ld) exiting\n",(long) getpid());
			_exit(EXIT_SUCCESS);
		default:
			sleep(3);
			snprintf(cmd, CMD_SIZE, "ps | grep %s", basename(argv[0]));
			system(cmd);

			if(kill(ChildPid, SIGKILL) == -1){
				printf("kill");
			}
			sleep(3);
			printf("After sending SIGKILL to zombie (PID == %ld):\n",(long) ChildPid);
			system(cmd);

			exit(EXIT_SUCCESS);
	}
}
