#include<stdio.h>
#include<signal.h>
#include<unistd.h>
static void sighandler(int sig){
  printf("Signal handler called\n");
}
int main(int argc ,char* argv[]){
  int j=0;
  signal(SIGINT,sighandler);
  while(1){
    printf("%d\n",j);
    j++;
    sleep(1);
    }
  return 0;
}
