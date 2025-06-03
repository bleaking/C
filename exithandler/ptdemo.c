#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
//void e1();
//void e2();
void f1(int exitstatus, void* args){
        printf("Exit status = %d\targ=%d\n",exitstatus,*((int*)args));
}
int x=10;
int main(){
	on_exit(f1,&x);
	//on_exit(e1,&x);
	//on_exit(e2,&x);
	//printf("Exit handlers registration completed\n");
	//printf("main function is about to complete\n");
	write(STDOUT_FILENO,"hello lucknow\n",14);
	//setbuf(stdout,NULL);
	pid_t pid=fork();
	exit(0);
}
void e1(){
	printf("Exit handler 1\n");
	printf("%d\n",x);
}
void e2(){
	printf("Exit handler 2\n");
	printf("%d\n",x);
}
