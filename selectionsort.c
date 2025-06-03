#include<stdio.h>
void selection(int*,int);
void printArray(int*,int);
void selection2(int*,int);
void swap(int*,int*);

int main (){
	int arr[]={5,7,2,3,8,6};
	int len=sizeof(arr)/sizeof(arr[0]);
	printf("selection sort\n");
	selection2(arr,len);
	printArray(arr,len);
	return 0;
}

void selection(int* arr,int len){
	int temp;
	for(int i=0;i<len-1;i++){
		for(int n=i;n<len;n++){
			if(arr[i]>arr[n]){
				temp=arr[i];
				arr[i]=arr[n];
				arr[n]=temp;
			}
		}
	}
}

void printArray(int* arr,int len){
	for(int i=0;i<len;i++){
		printf("%d\t",arr[i]);
	}
}
void selection2(int* a,int len){
        int min;
        for(int i=1;i<len;i++){
            min=i-1;
            for(int n=i;n<len;n++){
                if(a[n]<a[min])
                    min=n;
            }
            swap(&a[i-1],&a[min]);
      }
}
void swap(int* a, int* b){
int temp = *a;
*a=*b;
*b=temp;
}
