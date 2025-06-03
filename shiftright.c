#include<stdio.h>
int main(){
	unsigned int x = 10;
	int a = x << 1;
	int b = x << 2;
	int c = x << 3;
	printf("a = %d \t b = %d \t c = %d \n",a,b,c);
	printf("x = %d",x);
	return 0;
}
