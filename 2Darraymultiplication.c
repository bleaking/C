#include<stdio.h>
int main(){
	int arr[][2]={{2,4},{7,5},{1,3}};
	int arrr[][3]={{5,4,1},{3,9,10}};
	int c[3][3];
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			c[i][j]=0;
			for(int k=0;k<2;k++){
			 	c[i][j]=(arr[i][k]*arrr[k][j])+c[i][j];
			}
		}
	}
	for(int i=0;i<3;i++){
		for(int j=0;j<3;j++){
			printf("%d\t",c[i][j]);
			}
		printf("\n");
	}
return 0;
}
