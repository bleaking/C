#include<stdio.h>
int  main(){
	int arr[2][3]={{2,3,5},{4,8,15}};
	printf("%d\n",sizeof(arr));
	printf("%d\n",sizeof(arr[0]));
	printf("%d \n",sizeof(arr[0][0]));
	int rows=sizeof(arr)/sizeof(arr[0]);
	int colos=sizeof(arr[0])/sizeof(arr[0][0]);
/*
	for(int i=0;i<rows;i++){
		for(int j=0;j<colos;j++){
			printf("%d\t",arr[i][j]);
		}
	printf("\n");
	}
*/
	return 0;
}
