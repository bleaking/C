#include<stdio.h>
int main(){
	int x = 10;
	int y = 20;
	int z = 30;
	int a = ++x;
	int b = y++;
	printf("a = %d\n",a);
	printf("b = %d\n",b);
	int c = (++x < ++y) && (++y < ++z);
	printf("x = %d \t y = %d \t z = %d\n ",x,y,z);
	int d = (++x < ++y) || (++y < ++z);
	printf("x = %d \t y = %d \ t z = %d\n",x,y,z);
	return 0;
}
