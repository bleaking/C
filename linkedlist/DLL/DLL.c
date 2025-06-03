#include <stdio.h>
#include <stdlib.h>
struct node {
	int data;
	struct node* prev;
	struct node* next;
}* head=NULL;
void create(int);
void traverse();
void insert(int,int);
int main(int argc, char* argv[]) {
	int option, non;
	while(1) {
		printf("1. Create list\n");
		printf("2. Traverse list\n");
		printf("3. Insert list \n");
		printf("10. Exit\n");
		scanf("%d", &option);
		switch(option) {
			case 1:
				printf("Enter number of nodes to be created: ");
				scanf("%d", &non);
				create(non);
				break;
			case 2:
				traverse();
				break;
			case 3:
				printf("Enter pos for node\n");
				int pos;
				scanf("%d",&pos);
				int data;
				printf("Enter data for node\n");
				scanf("%d",&data);
				insert(data,pos);
				break;
			case 10:
				exit(0);
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}
void create(int non) {
	struct node* temp;
	for(int i=1; i<=non; i++) {
		temp=(struct node*)malloc(sizeof(struct node));
		temp->prev=NULL;
		temp->next=NULL;
		printf("Enter data for node %d: ", i);
		scanf("%d", &temp->data);
if(i==1)
			head=temp;
		else {
			struct node* p=head;
			while(p->next!=NULL)
				p=p->next;
			p->next=temp;
			temp->prev=p;
		}
	}
}

void traverse() {
	struct node* p=head;
	printf("Forward Direction: ");
	while(p!=NULL) {
		printf("%d\t", p->data);
		if(p->next==NULL)
			break;
		else
			p=p->next;
	}
	printf("\n");
	printf("Backward Direction: ");
	while(p!=NULL) {
		printf("%d\t", p->data);
		p=p->prev;
	}
	printf("\n");
}
void insert(int pos,int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	struct node* p=head;
	temp->data=data;
	temp->next=NULL;
	temp->prev=NULL;
		if(pos==1){
			if(head==NULL)
				head=temp;
			else if(head!=NULL){
				temp->next=head;
				head->prev=temp;
				head=temp;
			}else{
				int count=1;
				while(p->next!=NULL && count<pos-1){
					p=p->next;
					count++;
				}
			if(count==pos-1){
			        temp->prev=p;
			        temp->next=p->next;
			                if(p->next!=NULL){
				                p->next->prev=temp;
			                }
	          		p->next=temp;
          		}else{
          		printf("position now found\n");
        	}
           }
     }
}
