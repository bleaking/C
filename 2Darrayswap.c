#include<stdio.h>
int main(){
	int arr[4][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int  temp=0;
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",arr[i][j]);
		}
	printf("\n");
	}
	printf("\n");
	for(int i=0;i<4;i++){
		for(int j=i;j<4;j++){
			temp=arr[j][i];
			arr[j][i]=arr[i][j];
			arr[i][j]=temp;
		}
	}
	for(int i=0;i<4;i++){
		for(int j=0;j<4;j++){
			printf("%d\t",arr[i][j]);
		}
	printf("\n");
	}
return 0;
}
