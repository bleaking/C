#define  _GNU_SOURCE
#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<sys/utsname.h>
int main(int argc, char** argv){
	struct utsname uts;
	if(uname(&uts)==-1){
		printf("Error Occured /n");
		return 0;
	}
	printf("Node name: %s\n",uts.nodename);
	printf("System name: %s\n",uts.sysname);
	printf("Release : %s\n", uts.release);
	printf("Version : %s\n",uts.version);
	return 0;
}
