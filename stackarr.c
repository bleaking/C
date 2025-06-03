#include<stdio.h>
#include<stdlib.h>
int push(int,int*);
int pop(int*);
int peek(int*);
int top=-1;
int len=10;
int main(int argc,char* argv[]){
int option,data,result;
int *stack=(int*)calloc(len,sizeof(int));
while(1){
  printf("1.push\n");
  printf("2.pop\n");
  printf("3.peek\n");
  printf("4.exit\n");
  scanf("%d",&option);
  switch(option){
    case 1:
    printf("Enter data\n");
    scanf("%d",&data);
    result=push(data,stack);
    if(result==0) printf("can not push\n");
    break;
    case 2:
    result=pop(stack);
    if(result==-1) printf("stack is empty\n");
    else printf("%d\n",result);
    break;
    case 3:
    result=peek(stack);
    if(result==-1) printf("stack is empty\n");
    else printf("%d\n",result);
    break;
    case 4:
    exit(0);
    default: 
    printf("Wrong option \n");
    }
  }
return 0;
}
int push(int data,int* sp){
  if(top==len-1) return 0;
  sp[++top]=data;
  return 1;
}

int pop(int* sp){
  if(top==-1) return -1;
  return sp[top--];
}

int peek(int* sp){
  if(top==-1) return -1;
  return sp[top];
}
