
#include<stdio.h>
#define AGE 20
int main() {
	int a = AGE ;
	#define AGE 30
	int x = AGE ;
	printf("x = %d\n",x);
	printf("a = %d\n",a);
	return 0;
}
