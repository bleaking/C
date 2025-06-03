#include<stdio.h>
int main(){
	char name[]="Mukesh" ;
	int length=0;
	while(name[length]!='\0'){
		length++;
	}
	printf("length of  name is  %d ", length);
	return 0;
}
