#include<stdio.h>
#include<stdlib.h>
struct node{
	int data;
	struct node* next;
};
void traverse(struct node**);
struct node** new();
void add(struct node**,int);
void dlt(struct node**,int);
void insert(struct node**,int,int);
int main(int argc,char* argv[]){
	int option;
	int data;
	int pos;
	while(1){
	  printf("Please enter an option \n");
	  printf("1.To create new Linked List \n");
	  printf("2.To add node at last\n");
	  printf("3.To traverse\n");
	  printf("4.To delete node at position\n");
	  printf("5.To insert node at position \n");
	  scanf("%d",&option);
	  switch(option){
	    case 1:
	      struct node** head=new();
	      break;
	    case 2:
	      printf("Enter the data \n");
	      scanf("%d",&data);
	      add(head,data);
	      break;
	    case 3:
	      traverse(head);
	      printf("\n");
	      break;
	    case 4:
	      printf("Enter the position of node you want to delete\n");
	      scanf("%d",&pos);
	      dlt(head,pos);
	      break;
	    case 5:
	      printf("Enter the position you want to Enter new node\n");
	      scanf("%d",&pos);
	      printf("Enter data for new node\n");
	      scanf("%d",&data);
	      insert(head,pos,data);
	      break;
	    default:
	      printf("Invalid operation");
	      break;
	  }
	}
	return 0;
}
struct node** new(){
	struct node** temp=(struct node**)malloc(sizeof(struct node*));
	*temp=NULL;
	return temp;
}
void add(struct node** temp, int data){
  struct node* p=(struct node*)malloc(sizeof(struct node));
  p->data=data;
  p->next=NULL;
  if(*temp==NULL) *temp=p;
  else{
    struct node* q=*temp;
    while(q->next!=NULL) q=q->next;
    q->next=p;
  }
}
void insert(struct node** temp,int pos,int data){
	struct node* neu=(struct node*)malloc(sizeof(struct node));
	neu->data=data;
	neu->next=NULL;
	struct node* q=*temp;
	if(pos==1){
		neu->next=*temp;
		*temp=neu;
	}else{
		int count=1; 
		while(count<pos && p->next==NULL){
			count++;
			p=q;
			p=p->next;
		}
		if(pos==count){
			neu->next=p->next;
			p->next=neu;
		}
	}
}
void traverse(struct node** temp){
  struct node* p=*temp;
  while(p!=NULL){
    printf("| %d |",p->data);
    p=p->next;
  }
}
void dlt(struct node** temp, int pos){
	struct node* p=*temp;
	struct node* q=*temp;
	if(p==NULL){
		printf("Linked-list is Empty \n");
		return;
	}
	if(pos==1){
		*temp=p->next;
		p->next=NULL;
		free(p);
	}else{
		int count=1;
		while(count<pos && p->next!=NULL){
			count++;
			p=q;
			p=p->next;
		}
		if(pos==count){
			q->next=p->next;
			p->next=NULL;
			free(p);
		}
	}
}
