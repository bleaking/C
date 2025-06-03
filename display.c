#include<stdio.h>
#include<stdlib.h>
int main(int argc, char* argv[]){
  if(argc==1){
    printf("No argument has passed \n");
    return 0;
    }
  /* for(int i=1;i<argc;i++){
    printf("%s\n",argv[i]);
    }*/
    int i=1;
    while(argv[i]!=NULL){
    //printf("%d\n",atoi(argv[i]));
    printf("%c\t",*argv[i]);
    i++;
    }
  return 0;
}
