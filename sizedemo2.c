#include<stdio.h>
#include<stdlib.h>
int x=10;
int main(int argc,char* argv[]){
	static int y=20;
	printf("x=%d\n",x);
	printf("y=%d\n",y);
	return 0;
}

