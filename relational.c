#include<stdio.h>
int main(){
	int x = 10, y = 20, z = 30;
	int a = (x<y)&&(y<z);
	int b = (x>y)||(y<z);
	printf("a = %d\t b = %d\n", a,b);
	return 0;
}
