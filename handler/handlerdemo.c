#include<stdio.h>
#include<stdlib.h>
#include<unistd.h>
void printer();
void display();
int main(int argc,char* argv[]){
	atexit(printer);
	atexit(printer);
	atexit(display);
	printf("hellowy\n");
	_exit(0);
}
void printer(){
	printf("printer function\n");
}
void display(){
	printf("display dunction\n");
}

