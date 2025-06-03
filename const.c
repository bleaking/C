#include<stdio.h>
int main(){
	const int x=10;
	printf("x=%d\n",x);
	int y;
	printf("y=%d\n",y);\
	const int *p=&y;
	*p=20;
	printf("y = %d\n", y);
	return 0;
}

