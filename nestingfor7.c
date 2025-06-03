#include<stdio.h>
int main(){
/*
for(int i=1; i<=5; i++){
	for(int j=5; j>=1; j--){
		if(i==j || i+j==6)
		printf(" *");
		else
		printf("  ");
		}
	printf("\n");
	}
*/
/*
for(int i=1; i<=5; i++){
	for(int j=1; j<=5; j++){
	 printf("%d,%d\t",i,j);
	}
	printf("\n\n");
}
*/
for(int i= 1;i<=5;i++){
	for(int j=1; j<=5; j++){
	 if(j==3&&i%2!=0||i==3 && j%2!=0||i%2==0&&j%2==0)
	 printf("*\t");
	 else
	 printf("\t");
	}
printf("\n\n\n");
}

return 0;
}
