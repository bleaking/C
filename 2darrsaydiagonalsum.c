#include<stdio.h>
int main(){
	int sum = 0;
	int arr[][4]={{1,2,3,4},{5,6,7,8},{9,10,11,12},{13,14,15,16}};
	int rows= sizeof(arr)/sizeof(arr[0]);
	int cols=sizeof(arr)/sizeof(arr[0][0]);
/*
	for(int i=0;i<rows;i++){
		for(int j=0;j<cols;j++){
			if(i==j)
				sum = sum+arr[i][j];
		}
	}
*/
int n=cols-1;
for(int i=0;i<rows;i++){
	if(i+n==3){
		sum=sum+arr[i][n];
		n--;
	}
}
	printf("sum of  secondary diagonal %d",sum);
	return 0;
}
