#include<stdio.h>
#include<stdlib.h>
#include"SCLL.h"
int main(int argc,char* argv[]){
	printf("Enter number of nodes you want to create \n");
	int i;
	scanf("%d",&i);
	t head=create(i);
	traverse(head);
	printf("Enter the position\n");
	scanf("%d",&i);
	/*int data;
	printf("Enter the data for new one\n");
	scanf("%d",&data);*/
	//insert(head,i,data);
	dlt(&head,i);
	traverse(head);
	return 0;
}
t create(int num){
        t temp;
	t head=NULL;
	for(int i=1;i<=num;i++){
		temp=(t)malloc(sizeof(node));
		temp->next=temp;
		printf("Enter data\n");
		scanf("%d",&temp->data);
		if(head==NULL){
			head=temp;
		}else{
			t p=head;
			while(p->next!=head){
				p=p->next;
			}
			p->next=temp;
			temp->next=head;
		}
	}
	return head;
}
void traverse(t head){
	t p=head;
	if(p!=NULL){
		do{
			printf("| %d |",head->data);
			head=head->next;
		}while(p!=head);
	printf("\n");
	}else{
		printf("Empty List\n");
	}
}
/*void insert(t* p, int pos, int data) {
	if(*p==NULL && pos>1)
		printf("Invalid position\n");
	else if(*p==NULL && pos==1) {
		t temp=(t)malloc(sizeof(node));
		temp->data=data;
		temp->next=temp;
		*p=temp;
	} else if(*p!=NULL && pos==1) {
		temp->next=*p;
		*p=temp;
		temp->next->next=*p;
	} else if(p!=NULL && pos>1) {
		t q=*p;
		int count=1;
		while(q->next!=*p && count<pos-1) {
			q=q->next;
			count++;
		}
		if(count==pos-1) {
			q->next=temp;
			temp->next=*p;
		} else
			printf("Invalid position\n");
	}
}
*/
void dlt(t* p,int pos){
  if(*p==NULL){
    printf("Empty list\n");
  }
  else if(pos==1){
    t headt=*p;
  //  printf("%d",headt->data);
    t q=*p;
    while(q->next!=*p){
      q=q->next;
    }
    *p=headt->next;
    headt->next=NULL;
    q->next=*p;
    free(p);
  }
}
