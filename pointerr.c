#include<stdio.h>
int main(){
	int x=10;
	int* p;
	p=&x;
	printf("x=%d\n",x);// --> x=10
	*p=20; // *p --> location pointed by p
	printf("x=%d\n",x); // --> x=20
	int k;
	k=*p; // *p --> value at location pointed by p
	printf("k=%d\n",k); // --> k=20
return 0;
}
