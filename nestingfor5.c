#include<stdio.h>
int main(){
int s = 5;
for(int i = 1; i<=5; i++){
	for(int j = 1; j<=5;j++){
		if(j<s)
		printf(" ");
		else
		printf("* ");
		}s--;
		printf("\n");
	}
return 0;
}
