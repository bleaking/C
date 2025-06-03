#include<stdio.h>
#include "mine.h"
int main(int argc, char* argv[]){
  printf("age in main is %d \n",age);
  printer();
  return 0;
}
void show (){
  printf("age is not %d\n",age);
}
