#include<stdio.h>
int main(){
	int x=10;
	int addr = &x;
	printf("%x\n",addr);
	int* p=&x;
	printf("%p\n",p);
	x++;
	addr=&x;
	p++;
	printf("%x\n",addr);
	printf("%p\n",p);
	printf("%d\n",(int)sizeof(p));
	return 0;
}
