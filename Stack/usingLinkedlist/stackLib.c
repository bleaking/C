#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
struct node{
	int data;
	struct  node* next;
}*head=NULL;
int push(int data){
	struct node* temp=(struct node*)malloc(sizeof(struct node));
	if(temp==NULL){
		return -1;
	}
	temp->data=data;
	temp->next=NULL;
	if(head==NULL){
		head=temp;
	}else{
		temp->next=head->next;
		head=temp;
	}
	return 1;
}
int pop(){
	struct node* point;
	point=head;
	if(head==NULL){
		return -1;
	}else{
		head=point->next;
		point->next=NULL;
		int d;
		d=point->data;
		free(point);
		return d;
	}
}
void printer(){
        struct node* p=head;
        while(p->next!=NULL){
                printf("%d\t",p->data);
                p=p->next;
        }
        printf("\n");
}
