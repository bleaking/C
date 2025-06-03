#include<stdio.h>
void printer();
int main(){
	int x=20;
	printf("x in main =%d\n",x);
	printer();
	return 0;
 }
void printer (){
	int x;
	x++;
	printf("x in printer =%d \n",x);
}
