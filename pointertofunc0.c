#include<stdio.h>
int add(int x,int y){
	return x+y;
}	
int diff(int x,int y){
	return (x>=y)?(x-y):(y-x);
}
void caller(int(*fp)(int,int),int x,int y){
	printf("result = %d\n",fp(x,y));
}
int main(){
	int x=10,y=20;
	caller(add,x,y);
	caller(diff,x,y);
	return 0;
}

