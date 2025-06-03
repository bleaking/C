#include<stdio.h>
void printarr(int*,int);
int main(){
	int arr[]={2,5,7,9,15};
	int len=sizeof(arr)/sizeof(arr[0]);
	for(int i=1;i<len;i++){
		arr[i]=arr[i-1]+arr[i];
	}
	printarr(arr,len);
	return 0;
}
void printarr(int arr[],int len){
	for(int i=0;i<len;i++)
		printf("%d\t",arr[i]);
}
