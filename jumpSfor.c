#include<stdio.h>
int main(){
	printf("break");
	for(int i = 0; i<10; i++){
		if(i==5)break;
		printf("%d\n",i);
	}
	printf("continue");
	for(int i = 0; i<10; i++){
		if(i==5)continue;
		printf("%d\n",i);
	}
	return 0;
}
