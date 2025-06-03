#include<stdio.h>
int main(int argc,char* argv){
//printf("type here....\n");
FILE* fp=fopen("sample.txt","r");
int data;
/* while((data=getchar())!='#'){
    putchar(data);
  }
*/
while((data=fgetc(fp))!=-1){
  putchar(data);
}
fclose(fp);
return 0;
}
