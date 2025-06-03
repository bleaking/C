#include<stdio.h>
long factorial(unsigned int n){
	if(n==0||n==1)
	return 1;
	return n*factorial(n-1);
	}
int main(){
	unsigned int n;
	printf("Enter a positive number");
	scanf("%u",&n);
	long result = factorial(n);
	printf("%ld\n",result);
	return 0;
}
