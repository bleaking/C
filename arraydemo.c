#include<stdio.h>
void printarray(int * , int);
int a[5];
int main(){
	int b[5];
	int c[5]={1,2,3,4,5};
	int d[10]={5,10,15};
	int e[5]={5};
	printarray(a,5);
	printarray(b,5);
	printarray(c,5);
	printarray(d,10);
	printarray(e,5);
	return 0;
}
void printarray(int arr[], int len){
	for(int i=0;i<len;i++)
		printf("%d\t",arr[i]);
	printf("\n");
}
