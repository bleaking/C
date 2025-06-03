#include<stdio.h>
struct node{
  int data;
  struct node* next;
  };
int main(){
  struct node fnode;
  struct node snode;
  struct node tnode;
  
  fnode.data=10;
  snode.data=20;
  tnode.data=30;
  
  fnode.next=&snode;
  snode.next=&tnode;
  tnode.next=NULL;
  
  struct node* head=&fnode;
  struct node* temp=head;
  
  while(temp!=NULL){
    printf("%d\n",temp->data);
    temp=temp->next;
    }
  printf("\n");
  return 0;
  }
