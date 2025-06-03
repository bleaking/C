#include<stdio.h>
#include<stdlib.h>
int pop();
int push(int);
void printer();
static int top=-1;
#define LENGTH 10
static int stack[LENGTH];
int main(int argc,char* argv[]){
        int option;
        int data;
        int result;
        while(1){
	        printf("1.push\n");
	        printf("2.pop\n");
	        printf("0.exit\n");
	        scanf("%d\n",&option);
	        switch(option){
	        case 1:
	                printf("Enter the data to push\n");
	                scanf("%d",&data);
	                result=push(data);
	                if(result==-1){
	                        printf("stack overflow\n");
	                }else{
	                        printer();
	                }
		        break;
	        case 2:
	                result=pop();
		        if(result==-1){
			        printf("Stack underflow\n");
		        }else{
			        printer();
		        }
		        break;
	        case 0:
		        exit(0);
		        break;
	        default:
	                printf("wrong option\n");
	                break;
	        }
	}
}
int pop(){
	if(top==-1){
		return -1;
	}
	return stack[top--];
}
int push(int data){
	if(top==LENGTH-1){
		return -1;
	}
	stack[++top]=data;
	return 0;
}
void printer(){
        int count=0;
        while(count<LENGTH){
                printf("%d\t",stack[count]);
                count++;
        }
        printf("\n");
}

