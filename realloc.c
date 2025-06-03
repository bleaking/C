#include<stdio.h>
#include<stdlib.h>
int  main(){
	int* p=(int*)malloc(sizeof(int));
	*p=10;
	printf("%d\n",*p);
	int* q=(int*)realloc(p,sizeof(int));
	printf("%d\n",*p);
	printf("%d\n",*q);
	return 0;
}
