#include<stdio.h>
#include<stdlib.h>
typedef struct{
  char* name;
  int age;
  char* college;
  }student;
int main(int argc,char* argv[]){
  student *stu=(student*)malloc(sizeof(student));
  stu->name="Mukesh Ambani";
  stu->age=30;
  stu->college="IUL";
  printf("%s\n",stu->name);
  printf("%d\n",stu->age);
  printf("%s\n",stu->college);
  return 0;
}
