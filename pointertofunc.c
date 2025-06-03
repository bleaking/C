#include<stdio.h>
int add(int x,int y){
	return x+y;
}
int diff(int x,int y){
	return (x>=y)?(x-y):(y-x);
}
int main(){
	int (*fp)(int,int);
	fp=&add; 
	int k=fp(20,15);
	printf("k=%d\n",k);
	fp=diff;
	k=fp(20,15);
	printf("k=%d\n",k);
	return 0;
}
