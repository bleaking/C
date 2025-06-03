#include<stdio.h>
void save(char*);
int main(int argc, char* argv[]){
  if(argc<2){
    printf("Correct usage: Command <output file>\n");
    return 0;
  }
  save(argv[1]);
  return 0;
}
void save(char* destination){
  FILE* fw=fopen(destination,"w");
  int data;
  while((data=getchar())!='@'){
    fputc(data,fw);
  }
fclose(fw);
}
