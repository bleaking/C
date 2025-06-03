#include<stdio.h>
void quick(int*,int);
void printer(int*,int);
void swap(int*,int*);
int main(int argc, char* argv[]){
	int a[]={-2,4,3,-1,-5,7,8,-6};
	int len=sizeof(a)/sizeof(a[0]);
	printer(a,len);
	quick(a,len);
	printer(a,len);
	return 0;
}
void quick(int* a,int len){
	int i=0, j=len-1;
	while(i<j){
		while(a[i]<0) i++;
		while(a[i]>=0) j--;
		if(i<j) swap(&a[i],&a[j]);
	}
}
void swap(int* x,int* y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void printer(int* a, int len){
	int i=0;
	while(i<len){
		printf("%d",a[i]);
		i++;
	}
	printf("\n");
}
