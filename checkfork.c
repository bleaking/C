#include<stdio.h>
#include<sys/wait.h>
#include<stdlib.h>
#include<unistd.h>
int main(){
	static int a=10;
	printf("Original Process\n");
	pid_t pid;
	int* p=(int*)malloc(sizeof(int));
	*p=25;
	pid=fork();
	int unin;
	switch(pid){
		case -1:
			printf("Could not fork\n");
			exit(0);
		case 0:
			printf("Inside child\n");
			printf("%d\t%d\t%p\n",a,*p,p);
			break;
		default:
			int q;
			wait(&q);
			printf("Inside parent\n");
			printf("%d\t%d\t%p\n",a,*p,p);
			printf("q=%d\n",q);
			return 0;
	}
	return 0;
}
