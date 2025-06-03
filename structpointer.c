#include<stdio.h>
int main(){
  struct user{
    char* name;
    int age;
    char* email;
    }* sp=NULL;
  struct user fbuser;
  sp=&fbuser;
  sp -> name="Mark Zuckerberg";
  sp -> age=38;
  sp -> email="Meta@gmail.com";
  printf("%s\n",sp->name);
  printf("%d\n",fbuser.age);
  printf("%s\n",sp->email);
  return 0;
  }
