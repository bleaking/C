#include<stdio.h>
#include<stdlib.h>
int  main(){
	int* b=(int*)calloc(10,sizeof(int));
	for(int i = 0; i<10;i++){
		printf("%d \n",b[i]);
	}
return 0;
}
