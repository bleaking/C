#include<stdio.h>
#include"search.h"
int main(int argc, char* argv[]){
  int a[]={2,4,8,15,17,25,30,38,47};
  int length=sizeof(a)/sizeof(a[0]);
  int data;
  printf("Enter data to be searched: ");
  scanf("%d",&data);
  int result=linearsearch(a,length,data);
  if(result==-1){
    printf("Not found\n");
  }
  else{
    printf("data found at include %d\n",result);
  }
  return 0;
}
