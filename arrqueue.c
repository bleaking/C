#include<stdio.h>
#include<stdlib.h>
int queue[10]={0};
int len=sizeof(queue)/sizeof(queue[0]);
int enqueue(int);
int dequeue();
int rear=-1;
int front=-1;
int main(int argc,char* argv[]){
int option;
int data;
int result;
printf("Limit is 10 \n");
while(1){
  printf("1.Enqueue\n");
  printf("2.Dequeue\n");
  printf("3.Exit\n");
  scanf("%d",&option);
  switch(option){
    case 1:
    printf("Enter data\n");
    scanf("%d",&data);
    result=enqueue(data);
    if(result==1) printf("data added \n");
    else printf("Queue is full!");
    break;
    case 2:
    result=dequeue();
    if(result==-1) printf("queue is empty \n");
    else printf("%d\n",result);
    break;
    case 3:
    exit(0);
    default:
    printf("wrong option\n");
    }  
  }
}
int enqueue(int data){
  if(rear==len-1) return 0;
  queue[++rear]=data;
  if(front==-1) front=rear;
  return 1;
}
int dequeue(){
  if((front>rear)||(rear==-1 && front==-1)){
    front=-1;
    rear=-1;
    return -1;
  }
  return queue[front++];
}
