#include<stdio.h>
void copy(char*,char*);
int main(int argc, char* argv[]){
	if(argc < 3){
		printf("correct usage: command  <input file> <output file>");
		return 0;
	}
	copy(argv[1],argv[2]);
	return 0;
}
void copy(char* source, char* destination){
      FILE* fr=fopen(source,"r");
      FILE* fw=fopen(destination,"w");
      if(fr==NULL || fw==NULL){
            printf("Could not open file\n");
      }else{
            int data;
            while((data=fgetc(fr))!=-1){
                  fputc(data,fw);
            }
            fclose(fr);
            fclose(fw);
      }
}
