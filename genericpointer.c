#include<stdio.h>
int main(){
	void* gp;
	int x=10;
	char y='A';
	float z= 3.5f;
	gp=&x;
	printf("%d\n",*((int*)gp));
	gp=&y;
	printf("%c\n",*((char*)gp));
	return 0;
}
