#include<stdio.h>
void printer();
static int x=10;
int main(){
	printer();
	printer();
	printer();
	printf("x=%d\n",x);
	return 0;
}
void printer(){
	printf("x in printer = %d \n",x);
	x++;
}
