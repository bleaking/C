#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void printFrequency(char*);
int main(){
  char str[]="HEATWAVE";
  printFrequency(str);
}
void printFrequency(char* str){
  int hash[128]={0};
  for(int i=0;i<strlen(str);i++){
    if(str[i]==' ') continue;
    hash[str[i]]++;
  }
  for(int i=0;i<128;i++){
    if(hash[i]>0){
      printf("%c--%d\n",i,hash[i]);
    }
  }
}
