#include<stdio.h>
#include<pthread.h>

void* copyfile(void*);
void* showfile(void*);
void* myjob(void*);
int retval;

#define BUFF 10

FILE* cp;
FILE* wf;
char buf[BUFF];

int main(int argc, char* argv[]){
	pthread_t tid;
	int arg=10;
	void* ag;
	printf("Main thread stated \n");
	if(pthread_create(&tid,NULL,copyfile,&arg)){
		printf("could not create a thread");
	}else{
		pthread_join(tid,&ag);
	}
	if(phtread_create(&tid,NULL,showfile,&arg)){
		printf("error/n");
	}else{
		pthread_join(tid,&ag);
	}
	printf("End of main thread \n");
	pthread_exit(&retval);
}
/*
void* myjob(void* arg){
	for(int i=0;i<*((int*)arg);i++){
		printf("Hello\n");
	}
	pthread_exit(&retval);
}
*/
void* copyfile(void*){
	cp=fopen("abc.txt","r");
	wf=fopen("def.txt","w");
	int DataChunk;
	while((DataChunk=fgetc(cp))!=NULL){
		fputc(data,wf);
	}
	fclose(cp);
	fclose(wf);
}

void* showfile(void*){
	char* a[BUFF];
	while((a=read(wf,buf,BUFF))!=NULL){
		printf("%s",a);
	}
}
