#include<stdio.h>
typedef union{
  char* name;
  int age;
  char* college;
  }student;
int main(int argc,char* argv[]){
  student mystudent;
  printf("%d\n",(int)sizeof(mystudent));
  mystudent.name="Amit";
  printf("%s\n",mystudent.name);
  printf("%s\n",mystudent.college);
  return 0;
  }
