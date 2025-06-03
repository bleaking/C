#include<stdio.h>
#include<stdlib.h>
#include"Aqueue.h"
static int arr[L];
static int rear=-1;
static int front=-1;
int enqueue(int data){
      rear++;
      if(rear>=L){
              return -1;
      }
      arr[rear]=data;
      return 0;
}
int dequeue(){
    if(front<L){
            front++;
    }
    if(rear<front || front==-1){
            return -1;
    }
    return arr[front];
}
void peek(){
        int i=0;
        while(i<L){
                printf("| %d |\t",arr[i]);
                i++;
        }
}
