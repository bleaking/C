#include<stdio.h>
void swaper(int arr[],int len){
	int temp=0;
	int count=len;
	for(int i=0;i<len;i++){
		if(count>i){
		temp=arr[i];
		arr[i]=arr[count];
		arr[count]=temp;
		}
		count--;
	}
}
int main(){
	int arr[]={2,5,4,85,87};
	int len=sizeof(arr)/sizeof(arr[0]);
	int swap = swaper(arr,len);
	for(int i=0;i<len;i++)
		printf("%d\t",arr[i]);
	return 0;
}
