#include<stdio.h>
#include<unistd.h>
#include<stdlib.h>
#include<sys/wait.h>
int main(int argc, char* argv[]){
	int status;
	int data;
	FILE* fd1 = fopen("abc.txt","w");
	FILE* fd2 = fopen("abc.txt","r");
	pid_t pid = fork();
	if(pid>0){
		wait(&status);
		while((data=fgetc(fd2))!=NULL){ 
			printf("%c",data);
		}
        fclose(fd2);
	}else if(pid==0){
		char c;
		while((c=getc())!='#'){
			fputc(c,fd1);
		}
	fflush(fd1);
	fclose(fd1);
	}
	return 0;
}

