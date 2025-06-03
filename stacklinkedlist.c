#include<stdio.h>
#include<stdlib.h>
typedef struct node{
  int data;
  struct node* next;
}noice;
noice* push(noice**,int);
int pop(noice**);
int peek(noice**);
int main(int argc,char* argv[]){
noice* top=NULL;
int option,data;
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
    noice* result=push(&top,data);
    if(result==NULL) printf("stack overflow\n");
    break;
    case 2:
    data=pop(&top);
    printf("%d\n",data);
    break;
    case 3:
    data=peek(&top);
    printf("%d\n",data);
    break;
    case 4:
    exit(0);
    default:
    printf("wrong option\n");
  }
}
/*  node n1,n2;
  n1.data=10;
  n2.data=20;
  n1.next=&n2;
  n2.next=NULL;
  node* head=&n1;
  while(head!=NULL){
    printf("%d\n",head->data);
    head=head->next;
  }
*/
  return 0;
}
noice* push(noice** ta,int data){
  noice* temp=(noice*)malloc(sizeof(noice));
  if(temp==NULL) return NULL;
  temp->data=data;
  temp->next=NULL;
  *ta=temp;
  return temp;
}
int pop(noice** ta){
  noice* temp=*ta;
  if(temp==NULL) return -1;
  *ta=temp->next;
  temp->next=NULL;
  int x=temp->data;
  free(temp);
  return x;
  }
int peek(noice** ta){
  noice* temp=*ta;
  if(temp==NULL) return -1;
  return temp->data;
}
