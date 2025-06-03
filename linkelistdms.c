#include<stdio.h>
#include<stdlib.h>
void traverseList();
//void createList(struct node** hpointer);
//void insertNode(struct node** hpointer, int pos);
void deleteNode(int pos);
void createList();
struct node{
  int data;
  struct node* next;
}*head=NULL;
int main(int argc,char* argv){
int option;
int pos;
while(1){ 
  printf("1. Create List \n");
  printf("2.Traverse List \n");
  printf("3.Insert Node \n");
  printf("4.Delete Node \n");
  printf("0.Exit\n");
  scanf("%d",&option);
  switch(option){
    case 1:
    printf("List created\n");
    createList(&head);
    break;
    case 2:
    printf("List traversed\n");
    traverseList();
    break;
    case 3:
    printf("Enter position \n");
    scanf("%d",pos);
    //insertNode(&head,pos);
    printf("Node inserted \n");
    break;
    case 4:
    printf("Enter Position \n");
    scanf("%d",&pos);
    deleteNode(pos);
    printf("Node deleted \n");
    break;
    case 0:
    exit(0);
    default:
    printf("wrong  option\n");
    }
  }
  return 0;
}
void createList(){
int non;
printf("Enter no. of nodes to be created \n");
scanf("%d",&non);
struct node*p;
for(int i=1; i<=non; i++){
  struct node* temp=(struct node*) malloc (sizeof(struct node));
  temp->next=NULL;
  printf("Enter node data\n");
  scanf("%d",&(temp->data));
  if(i==1){
    head=temp;
    p=head;
    }
  else{
    while(p->next!=NULL) p=p->next;
    p->next=temp;
    }
  }
}

/*
void createList(struct node** hpointer){
int non;
printf("Enter no. of nodes to be created \n");
scanf("%d",&non);
struct node* p;
for(int i=1;i<=non;i++){
  struct node* temp=(struct node*) malloc (sizeof(struct node));
  temp->next=NULL;
  printf("Enter data for node\n");
  scanf("%d",&(temp->data));
  if(i==1){
    hpointer*=temp;
    p=*hpointer;
    }
  else{
    while(p->next!=NULL) p=p->next;
    p->next=temp;
    }
  }
}
*/
/*void insertNode(struct node** hpointer, int pos){
  struct node* temp=(struct node**) malloc(sizeof(struct node));
  temp->next=NULL;
  printf("Enter data\n");
  scanf("%d",&temp->data);
  if(pos==1){
    temp->next=*hpointer;
    *hpointer=temp;
  }else{
    struct node* p=*hpointer;
    int count=1;
    while(p->next!=NULL && count<pos-1){
      p=p->next;
      count++;
    }
    temp->next=p->next;
    p->next=temp;
  }
}
*/
void traverseList(struct node** hpointer){
  struct node* p=head;
  while(p!=NULL){
  printf("[ %d ]",p->data);
  p=p->next;
  if(p==NULL) break;
  printf("-->");
  }
  printf("\n");
}

void deleteNode(int pos){
struct node* p;
struct node* q;
int count=1;
 if(pos==1){
    p=head;
    head=p->next;
    p->next=NULL;
    free(p);
  }else{
    p=head;
    q=head;
    int count=1;
    while(p->next!=NULL && count<pos){
      q=p;
      p=p->next;
      count++;
    }
  q->next=p->next;
  p->next=NULL;
  free(p);
  }
}
