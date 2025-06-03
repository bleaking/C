#include<stdio.h>
int main(){
FILE* fpr=fopen("mob.jpg","r");
FILE* fpw=fopen("mob2.png","w");
int data;
while((data=fgetc(fpr))!=EOF){
  fputc(data,fpw);
}
fclose(fpr);
fclose(fpw);
return 0;
}
