#include<stdio.h>
#include<stdlib.h>
#include"LLQueue.h"
int flag=0;
struct node* head=NULL;
int enqueue(int data){
        struct node* temp=(struct node*)malloc(sizeof(struct node));
        if(temp==NULL){
                return -1;
        }
        temp->data=data;
        temp->next=NULL;
        struct node* p=head;
        if(p==NULL){
                head=temp;
                front=head;
        }else{
                while(p->next!=NULL){
                        p=p->next;
                }
                p->next=temp;
        }
        rear=temp;
        return 0;
}
int dequeue(){
        struct node* p=front;
        if(head==NULL || flag==1){
                return -1;
        }
        else if(p->next==NULL){
                flag=1;
        }
        head=p->next;
        front=p->next;
        p->next=NULL;
        int d=p->data;
        free(p);
        return d;
}
void peek(){
        struct node* p=head;
        while(p->next!=NULL){
                printf("| %d |\t",p->data);
                p=p->next;
        }
        printf("| %d |\t",p->data);
}
