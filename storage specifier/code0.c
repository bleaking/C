#include<stdio.h>
void printer();
int y=15;
int main(int argc,char* argv[]){
  for(int i=0;i<5;i++){
    printer();
  }
  printf("y=%d\n",y);
  return 0;
}
void printer(){
  register int x=10;
  printf("x=%d\n",x);
  printf("%p\n",&x);
  x++;
}

