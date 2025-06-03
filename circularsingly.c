#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node*  next;
} point;
point *head = NULL;
int createnode(int);
int traverse();
int insertnode(int,int);
int main(int argc,char* argv[]){
  printf("Create Circular linked-list \n");
  int option;
  int data;
  int result;
  int sp;
  while(1){
    printf("1.create node\n");
    printf("2.traverse list\n");
    printf("3.Insert node\n");
    printf("0.exit\n");
    scanf("%d",&option);
    switch (option){
      case 1:
        printf("Enter size of linked list\n");
        scanf("%d",&sp);
        while(sp!=0){
          printf("Enter data for node\n");
          scanf("%d",&data);
          result=createnode(data);
          if(result==-1){
            printf("Memory is full \n");
            break;
            }
          sp--;
          }
        if(result==0) printf("Added Successfully \n");
        break;
      case 2:
        traverse();
        break;
      case 3:
        printf("Enter the position\n");
        scanf("%d",&sp);
        printf("Enter data for node\n");
        scanf("%d",&data);
        result=insertnode(sp,data);
        break;
      case 0:
        exit(0);
      default:
        printf("wrong option\n");
    }
  }
}
int createnode(int data){
  point* temp=(point*)malloc(sizeof(point));
  if(temp==NULL) return -1;
  temp->data=data;
  temp->next=temp;
  point *p;
  p=head;
  if(head==NULL) head=temp;
  else{
    while(p->next!=head){
      p=p->next;
    }
    p->next=temp;
    temp->next=head;
  }
  return 0;
}
int traverse(){
  point* p=head;
  if(head==NULL) printf("List is empty\n");
  printf("%d\n",p->data);
  while(p->next!=head){
    p=p->next;
    printf("%d\n",p->data);
  }
}
int insertnode(int sp,int data){
  point* temp;
  point *p=head,*q;
  temp->data=data;
  temp->next=temp;
  if(sp==1){
    temp->next=head;
    head=temp;
  } 
  else{
    while(sp!=0){
      q=p;
      p=p->next;
      sp--;
    }
    q->next=temp;
    temp->next=p;
  }
  free(temp);
  return 0;
}
