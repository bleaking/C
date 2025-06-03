#include<stdio.h>
void printer(){
	static int x=10;
	printf("value of x= %d \n " ,x);
	printer();
	x++;
	}
int main(){
	printer ();
	printer ();
	printer ();
	return 0;
}
