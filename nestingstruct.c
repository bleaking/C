#include<stdio.h>
#include<stdlib.h>
typedef struct{
  char* name;
  char* city;
  }loc;
struct student{
  char* name;
  int age;
  loc* lp;
  };
int main(){
  struct student stu;
  printf("%d\n",(int)sizeof(stu));
  stu.name="Amit kummar";
  stu.age=32;
  stu.lp=(loc*)malloc(sizeof(loc));
  
  stu.lp->name="Integral Universtiy";
  stu.lp->city="Lucknow";
  
  printf("%s\n",stu.name);
  printf("%s\n",stu.lp->name);
  return 0;
}
