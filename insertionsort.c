#include<stdio.h>

void sorting(int*,int);
void printArray(int*,int);

int main(){
  int arr[]={12,11,13,5,6};
  int len=sizeof(arr)/sizeof(arr[0]);
  sorting(arr,len);
  printArray(arr,len);
  return 0;
}

void printArray(int* a,int len){
  for(int i=0;i<len;i++)
    printf("%d\t",a[i]);
}

void sorting(int* a,int len){
  int temp,j;
  for(int i=1;i<len;i++){
    temp = a[i];
    for(j=i-1;j>=0 && a[j]>temp;j--){
       a[j+1]=a[j];
    }
    a[j+1]=temp;
  }
}
