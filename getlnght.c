#include<stdio.h>
#include<string.h>
int main(){
	char name[]="luck\\0now"  ;
	int len = strlen(name);
	printf("%d size of name",len);
	printf("%s", name);
	return 0;
}

