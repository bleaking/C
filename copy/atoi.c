
#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv){
	int i=1;
	int sum=0;
	while (i<argc){
		sum=sum+atoi(*(argv+i));
		i++;
	}
	printf("sum=%d\n",sum);
	return 0;
}
