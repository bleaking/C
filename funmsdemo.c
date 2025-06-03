#include<stdio.h>
#define ADD(x,y) x+y
int main(){
	int x = ADD(5,8);
	float y = ADD(3.8,2.5);
	printf("x = %d\n",x);
	printf("y = %f\n",y);
	return 0;
}
