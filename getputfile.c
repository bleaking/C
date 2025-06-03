#include<stdio.h>
int main(){
FILE* fpr=fopen("sample2.txt","r");
FILE* fpw=fopen("sample3.txt","a");
int data;
while((data=fgetc(fpr))!=EOF){
  fputc(data,fpw);
}
fclose(fpr);
fclose(fpw);
return 0;
}
