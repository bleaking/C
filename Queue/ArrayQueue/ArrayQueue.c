#include<stdio.h>
#include<stdlib.h>
#include"Aqueue.h"
int main(int argc,char* argv[]){
	int option; 
	int data;
	int result;
	while(1){
	        printf("Enter choice:\n");
	        printf("1.Enqueue\n");
	        printf("2.Dequeue\n");
	        printf("3.peek\n");
	        printf("0.exit\n");
	        scanf("%d",&option);
	        switch(option){
		        case 1:
			        printf("---------Enqueue---------\n");
			        printf("Enter the data to ENQUEUE\n");
			        scanf("%d",&data);
			        result=enqueue(data);
			        if(result==-1){
				        printf("queue is full\n");
			        }else{
				        printf("Element is added\n");
			        }
			        break;
		        case 2:
			        printf("---------Dequeue----------\n");
			        result=dequeue();
			        if(result==-1){
				        printf("queue is empty\n");
			        }else{
				        printf("element is dequed\n");
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
}
