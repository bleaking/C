#include<stdio.h>
int main(){
  struct student{
    char* name;
    int age;
    char* college;
    };
  struct student mukesh;
  printf("%ld\n",sizeof(struct student));
  typedef struct{
    char* name;
    int age;
    char* college;
    }teacher;
  teacher anum;
  printf("%d\n",(int)sizeof(teacher));
  return 0;
  }
