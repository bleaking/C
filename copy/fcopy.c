#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
#include<string.h>
#include<fcntl.h>
#ifndef BUF_SIZE
  #define BUF_SIZE 1024
#endif

int main(int argc, char* argv[]){
if(argc<3){
  printf("Correct usage: command source destination \n");
  return 0;
}
int inputFD=open(argv[1],O_RDONLY);
  if(inputFD==-1){
    printf("could not open source file \n");
    return 0;
  }
  int outputFD=open(argv[2],O_CREAT | O_WRONLY, S_IRUSR | S_IWUSR | S_IRGRP | S_IROTH | S_IWOTH);
   off_t t=lseek(outputFD,1000,SEEK_END);
    if(t==-1){
      printf("can not seek\n");
      }
      char buf[BUF_SIZE];
      ssize_t numRead;
      while((numRead=read(inputFD,buf,BUF_SIZE))>0){
        if(write(outputFD,buf,numRead)!=numRead){
          printf("partial write occurred \n");
          return 0;
        }
      }
    close(inputFD);
    close(outputFD);
    return 0;
}                                                                                                                                                                                                              
