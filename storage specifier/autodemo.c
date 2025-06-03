#include<stdio.h>
void printer();
int x=50;
int main(int argc, char* argv[]){
  //auto int x=20;
  printf("x=%d\n",x);
  printer();
  return 0;
}
void printer(){
  //int x=10;
  printf("x=%d\n",x);
}
