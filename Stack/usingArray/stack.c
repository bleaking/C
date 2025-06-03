#include<stido.h>
static int top=-1;
#define LENGTH 10
static int stack[LENGTH];
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
                printf("%d",stack[count]);
                count++;
        }
        printf("\n");
}

