#include<stdio.h>
#include <billibili.h>
void swap(int*, int*);
void printer(int*, int);
int main(int argc,char* argv[]){
  int arr[]={5,7,2,1,49,6,87,52,33,22};
  int len=sizeof(arr)/sizeof(arr[0]);
  printer(arr,len);
  sort(arr,len,dese);
  printer(arr,len);
  return 0;
}
void swap(int* x, int* y){
  int temp=*x;
  *x=*y;
  *y=temp;
}
void printer(int* arr, int len){
  printf("arr[%d]={",len);
  for(int i=0;i<len;i++){
    printf("%d, ",arr[i]);
  }
  printf("};\n");
}
