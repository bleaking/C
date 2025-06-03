#include<stdio.h>
int main(){
	unsigned int x = 50;
	int a =  x >> 1;
	int b = x >> 2;
	int c = x >> 3;
	printf("a = %d\n b = %d\n c = %d\n",a,b,c);
	printf("x = %d",x);
	return 0;
}
