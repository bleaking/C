#include<stdio.h>
int main(){	
	unsigned int a;
	printf("Enter a number \n To check if it is power of two\n");
	scanf("%u",&a);
	if ((a & (a-1))==0){
	printf("%d is power of two\n",a);
	}
	else{
	printf("It is not");
	}
return 0;
}
