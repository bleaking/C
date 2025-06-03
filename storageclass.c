#include<stdio.h>
int printer();
extern int x=10;
int main(){
	auto int x=20;
	printer();
	printf("x in main = %d \n",x);
	if(1){
		auto int x = 30;
		printf("x in f = %d \n",x);
	}
	return 0;
}
int printer(){
	printf("x value in  printer function =%d\n"    , x);
}
