#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(int argc, char* argv[]){
  int status; 
  char command[2][50];
  while(1){
    printf("> ");
    scanf("%s",&command[0][0]);
    pid_t pid=fork();
    if(pid==0){
      execl(command[0][0],"",(char*)NULL);
      exit(0);
    } else {
      wait(&status);
    }
  }
  return 0;
}
