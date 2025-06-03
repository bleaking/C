#include<stdio.h>
#include<stdlib.h>
#include"stack.h"
int main(int argc,char* argv[]){
	int option;
	int data;
	int result;
	while(1){
	        printf("1.push\n");
	        printf("2.pop\n");
	        printf("0.exit\n");
	        scanf("%d",&option);
	        switch(option){
		        case 1:
			        printf("-------push-------\n");
			        printf("Enter data for node\n");
			        scanf("%d",&data);
			        result=push(data);
			        if(result==-1){
				        printf("Stack overflow\n");
			        }else{
				        printf("Done pushing!!!\n");
			        }
			        break;
		        case 2:
			        printf("-------pop-------\n");
			        result=pop();
			        if(result==-1){
				        printf("Stack underflow\n");
			        }else{
				        printf("Done popping!!!\n");
					printf("%d\n",result);
			        }
			        break;
		        case 0:
			        exit(0);
		        default:
			        printf("Wrong choice\n");
		}
		//printer();
	}
}
