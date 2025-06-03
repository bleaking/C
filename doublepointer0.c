#include<stdio.h>
int main(){
	int x= 10;
	int* p=&x;
	int** q=&p;
	
	printf("%p\n",&x);
	printf("%p\n",p);		//address of x
	printf("%p\n",*q);		

	printf("%p\n",&p); 		//same address of p
	printf("%p\n",q);
	
	printf("%d\n",x);  			
	printf("%d\n",*p);		// 10
	printf("%d\n",**q);
	
	int*** s=&q;
	printf("%d\n",***s);
	int**** v=&s;
	****v = 20;
	printf("%d\n",x);
	int***** t=&v;
	*****t = 30;
	printf("%d\n",v);
return 0;
}
