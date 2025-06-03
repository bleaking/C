#include<stdio.h>
#include<stdlib.h>
#include"LLQueue.h"
int main(int argc,char* argv[]){
	int option;
	int result;
	int data;
	while(1){
		printf("1.Enqueue\n");
		printf("2.dequeue\n");
		printf("3.peek\n");
		printf("0.exit\n");
		scanf("%d",&option);
		switch(option){
			case 1:
				printf("-------Enqueue------\n");
				printf("Enter data to Enqueue\n");
				scanf("%d",&data);
				result=enqueue(data);
				if(result==-1){
					printf("Queue is Full\n");
				}else{
					printf("data is queued\n");
				}
				break;
			case 2:
				printf("-------Dequeue--------\n");
				result=dequeue();
				if(result==-1){
					printf("Queue is empty\n");
				}else{
					printf("Dequeued\n");
					printf("%d\n",result);
				}
				break;
			case 3:
				peek();
				printf("\n");
				break;
			case 0:
				exit(0);
			default:
				printf("Wrong choice\n");
		}
	}
	return 0;
}
