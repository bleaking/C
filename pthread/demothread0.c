#include<stdio.h>
#include<stdlib.h>
#include<pthread.h>

void* cpFile(void*);
void* shFile(void*);
typedef struct{
	char* ff;
	char* tf;
}fileinfo;
void* retval;

int main(int argc, char* argv[]){
	pthread_t tid1, tid2;
	int arg1,arg2;
	fileinfo* fi=(fileinfo*)malloc(sizeof(fileinfo));
	fi->ff="main.txt";
	fi->tf="copy.txt";
	if(pthread_create(&tid1,NULL,cpFile,fi)){
		printf("Could not create thread \n");
		return 0;
	}
	pthread_join(tid1,&retval);
	if(pthread_create(&tid2,NULL,shFile,fi)){
		printf("Could not create thread \n");
		return 0;
	}
	pthread_join(tid2,&retval);
	printf("Task complete\n");
	pthread_exit(&retval);
}

void* cpFile(void* finfo){
	fileinfo* fi=(fileinfo*)(finfo);
	int data;
	FILE* fr=fopen(fi->ff,"r");
	FILE* fw=fopen(fi->tf,"w");
	while((data=fgetc(fr))!=-1){
		fputc(data,fw);
	}
	fclose(fr);
	fclose(fw);
	return NULL;
}

void* shFile(void* finfo){
	fileinfo* fi=(fileinfo*)(finfo);
	char data;
	FILE* fr=fopen(fi->tf,"r");
	while((data=fgetc(fr))!=EOF){
		printf("%c",data);
	}
	fclose(fr);
	return NULL;
}
