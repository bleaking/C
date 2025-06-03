#include<stdio.h>
int main(){
	int x = 10;
	char* str = "Lucknow";
	printf("x=%d\tname=%s\n",x,str);
	printf("name=%s\tx=%d\n",str,x);
	printf("x=%d\tname=%s\n",str,x);
	return 0;
}
