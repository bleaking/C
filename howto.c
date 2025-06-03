#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
void myfunciton(){
	printf("Myfunction\n");
	_exit(0);
}
void yourfunction(){
	printf("yourfuncitoin\n");
}
int add(int,int);
int main(int argc,char* argv[]){
	atexit(&myfunciton);
	atexit(&myfunciton);
	atexit(&yourfunction);
	int a=10,b=20,c;
	c=add(a,b);
	printf("Result = %d\n ",c);
	exit(0);
}
int add(int a, int b){
	int z=a+b;
	return z;
}

