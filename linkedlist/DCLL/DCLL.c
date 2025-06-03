#include<stdio.h>
#include<stdlib.h>
#include<malloc.h>
struct node{
	struct node* prev;
	int data;
	struct node* next;
}*head=NULL;
void dlt(int);
void add(int);
void traverse();
void insert(int pos,int data);
int main(int argc,char* argv[]){
	int num;
	printf("Enter number of nodes \n");
	scanf("%d",&num);
	add(num);
	traverse();
	printf("Enter the position\n");
	int pos;
	scanf("%d",&pos);
	printf("Enter the data for node\n");
	int data;
	scanf("%d",&data);
	insert(pos,data);
	traverse();
	printf("Enter the position of node to delete\n");
	scanf("%d",&pos);
	dlt(pos);
	return 0;
}
void add(int num){
	int count=0;
	while(count<num){
		printf("Enter data for node\n");
		int data;
		scanf("%d",&data);
		struct node* temp=(struct node*)malloc(sizeof(struct node));
		temp->data=data;
		temp->prev=temp;
		temp->next=temp;
		if(count==0){
			head=temp;
		}else{
		struct node* p=head;
		while(p->next!=head){
			p=p->next;
		}
		temp->prev=p;
		p->next=temp;
		temp->next=head;
		head->prev=temp;
		}
		count++;
	}
}
void traverse(){
	struct node* p=head;
	struct node* last=NULL;
	while(p->next!=head){
	      printf("-%d-\n",p->data);
	      p=p->next;
	}
	last=p;
	printf("-%d-\t\n",p->data);
	while(p->prev!=last){
	      printf("-%d-\n",p->data);
	      p=p->prev;
	}
}
void insert(int pos,int data){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        temp->data=data;
        temp->prev=temp;
        temp->next=temp;
        if(pos==1){
                if(head==NULL){
                        head=temp;
                }else{
                        struct node* p=head;
                        temp->next=p;
                        temp->prev=p->prev;
                        p->prev=temp;
                        head=temp;
                }   
        }else{
                struct node* p=head;
                int count=1;
                while(count<=pos-1){
                        p=p->next;
                        count++;
                }
                temp->next=p;
                temp->prev=p->prev;
                p->prev->next=temp;
                p->prev=temp;
        }
}
void dlt(int pos){
        if(pos==1){
                struct node* p=head;
                struct node* q=p->prev;
                head=p->next;
                q->next=p->next;
                p->next->prev=q;
                p->next=NULL;
                p->next=NULL;
                free(p);
        }else{
                struct node* p=head;
                int count=1;
                while(count<=pos-1){
                        
                }
        }
}
