#include<stdio.h>
#include<stdlib.h>
struct node{
  int data;
  struct node* next;
}*front=NULL,*rear=NULL;
int enqueue(int);
int dequeue();
int main(int argc,char* argv[]){
int option;
int data;
int result;
  while(1){
  printf("1.Enqueue\n");
  printf("2.dequeue\n");
  printf("3.exit\n");
  scanf("%d",&option);
      switch (option){
      case 1:
      printf("Enter number\n");
      scanf("%d",&data);
      result=enqueue(data);
      if(result==0) printf("Insufficient space!\n");
      else printf("successfully pushed\n");
      break;
      case 2:
      result=dequeue();
      if(result==-1) printf("Queue is empty!\n");
      else printf("%d\n",result);
      break;
      case 3:
      exit(0);
      default:
      printf("wrong choice\n");
    }
  }
}
int enqueue(int data){
  struct node* temp=(struct node*)malloc(sizeof(struct node));
  if(temp==NULL) return 0;
  temp->data=data;
  temp->next=NULL;
  if(front==NULL && rear==NULL){
    front = temp;
    rear = temp;
    return 1;
  }
  rear->next=temp;
  rear=temp;
  return 1;
}
int dequeue(){
  if(front == NULL && rear == NULL) return 1;
  struct node* temp =front;
  front = temp->next;
  temp->next=NULL;
  int x=temp->data;
  free(temp);
  if(front==NULL) rear=NULL;
  return x;
}
