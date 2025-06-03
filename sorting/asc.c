#include<stdio.h>
void asc(int* arr,int len){
  int flag;
  for(int i=1;i<len;i++){
    flag=0;
    for(int j=1;j<len-i+1;j++){
      if(arr[j-1]>arr[j]){
        flag=1;
        swap(&arr[j-1],&arr[j]);
      }
    }
    if(flag==0) break;
  }
}
