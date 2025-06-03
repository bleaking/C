#include<stdio.h>
#include<setjmp.h>
static jmp_buf env;
void printer();
void show();
static int i=1;
int main(int argc,char** argv){
        int n=0;
	printf("main function started \n");
	n=setjmp(env);
	if(n==0)
	  printer();
	else if(n==1)
	  show();
	printf("End of main function \n");
	return 0;
}
void printer(){
	printf("printing started \n");
	longjmp(env,i++);
	printf("End of printer\n");
}
void show(){
        printf("show started\n");
        longjmp(env,i);
        printf("End of show\n");
}
	
