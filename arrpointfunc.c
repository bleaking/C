#include<stdio.h>
/*
void printArray(int*);
int main (){
	int arr[]={2,5,7,9,8};
	printArray(arr);
	return 0;
}
void printArray(int* a){
	int len=sizeof(a)/sizeof(a[0]);
	for(int i=0; i<len; i++)
		printf("%d\t",a[i]);
	printf("\n");
}
*/
void printArray(int*,int);
int main (){
	int arr[]={2,5,7,9,8};
	int len=sizeof(arr)/sizeof(arr[0]);
	printArray(arr,len);
	return 0;
}
void printArray(int* a,int len){
        
	for(int i=0; i<len; i++)
		printf("%d\t",i[a]);
	printf("\n");
}
