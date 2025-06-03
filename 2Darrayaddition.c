#include<stdio.h>
int main(){
	int a[3][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12}};
	int b[3][4]={{13,14,15,16},{17,18,19,20},{21,22,23,24}};
	int c[3][4];
	for(int i =0;i<3;i++){
		for(int j=0;j<4;j++){
			c[i][j]=a[i][j]+b[i][j];
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",c[i][j]);
		}
	printf("\n");
	}
return 0;
}
