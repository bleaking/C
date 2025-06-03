#include<stdio.h>
#include<unistd.h>
int main(int argc, char* argv[]){
  printf("pid=%d\n",getpid());
  printf("ppid=%d\n",(int)getppid());
  printf("gid=%d\n",(int)getgid());
  printf("uid=%d\n",(int)getuid());
  pid_t split=fork();
  printf("split=%d\n",(int)split);
  return 0;
}
