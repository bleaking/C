#include<stdio.h>
void merge(int*,int,int*,int);
void printer(int*,int);
int main(int argc,char* argv[]){
	int a[]={2,5,9,15};
	int b[]={3,7,8,30,35,0,0,0,0};
	int la=sizeof(a)/sizeof(a[0]);
	int lb=sizeof(b)/sizeof(b[0]);
	printer(b,lb);
	merge(a,la,b,lb);
	printer(b,lb);
	return 0;
}
void merge(int* a,int la,int* b,int lb){
	int i=la-1;
	int j=lb-la-1;
	int k=lb-1;
	while(i>=0 && j>=0){
		if(a[i]>=b[j]){
			b[k]=a[i];
			i--;
		}
		else{
			b[k]=b[j];
			j--;
		}
		k--;
	}
	while(i>=0){
		b[k]=a[i];
		k--;
		i--;
	}
}
void printer(int* b,int lb){
	for(int i=0;i<lb;i++){
		printf("%d\t",b[i]);
	}
	printf("\n");
}
