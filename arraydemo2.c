#include<stdio.h>
int main(){
	int arr[]={2,5,7,9,11};
	int len=sizeof(arr)/sizeof(arr[0]);
	int sum =0;
	for(int i=0; i<len; i++){
	sum = sum+arr[i];
	printf("%d\t",sum);
	}
printf("\n");
return 0;
}

