#include<stdio.h>
void printer(int*,int);
int hoareAlgo(int*,int,int);
void swap(int*,int*);
int main(int argc, char* argv[]){
	int a[]={3,4,2,8,7,1,5};
	int len=sizeof(a)/sizeof(a[0]);
	printer(a,len);
	hoareAlgo(a,0,len-1);
	printer(a,len);
}
int hoareAlgo(int* a,int low,int high){
	int pivot=low;
	int j=high;
	int i=low+1;
	while(i<j){
		while(i<=j && a[i]<=a[pivot]) i++;
		while(i<=j && a[j]>a[pivot]) j--;
		if(i<=j) swap(&a[i],&a[j]);
	}
	swap(&a[pivot],&a[j]);
	return j;
}
void swap(int* x,int* y){
	int temp=*x;
	*x=*y;
	*y=temp;
}
void printer(int* a, int len){
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}

