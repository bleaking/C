#include<stdio.h>
void swap(int*,int*);
void printer(int*,int);
void selectionsort(int*,int);
int main(int argc, char* argv[]){
	int arr[]={5,4,12,5,16,19,88,27,3,9};
	int len=sizeof(arr)/sizeof(arr[0]);
	printer(arr,len);
	selectionsort(arr,len);
	printer(arr,len);
	return 0;
}
void swap(int* x,int* y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void selectionsort(int* arr, int len){
	int index=0;
	for(int i=1;i<len;i++){
		index=i-1;
		for(int j=i;j<len;j++){
			if(arr[j]<arr[index])
			index=j;
		}
	swap(&arr[i-1],&arr[index]);
	}
}
void printer(int* arr, int len){
  printf("arr[%d]={",len);
  for(int i=0;i<len;i++){
    printf("%d, ",arr[i]);
  }
  printf("};\n");
}
