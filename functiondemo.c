#include<stdio.h>
int add(int,int);
main(){
	int a=10; int b=20; int c;
	c=add(a,b);
	printf("%d\n",c);
	return 0;
	}
int add(int x,int y){
	int c=x+y;
	return c;
	}
