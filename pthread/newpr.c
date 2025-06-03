#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>
#include<unistd.h>

int main(){
	printf("!!! NEW PROGRAM !!!\n");
	printf("*tid of program = %d\n",(int)pthread_self());
	printf("*pid of this program = %d\n",(int)getpid());
	return 0;
}
