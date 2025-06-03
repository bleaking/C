#include<stdio.h>
long power(unsigned int x, unsigned int n){
	long result = 1;
	for(int i=1; i<=n; i++)
		result=result*x;
	return result;
}
int main(){
	printf("enter a number");
	unsigned int x;
	unsigned int n;
	scanf("%d",&x);
	printf("enter a power");
	scanf("%d",&n);
	long print=power(x,n);
	printf("%ld\n",print);
	}

