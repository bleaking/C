#include<stdio.h>
void printer(int*,int);
void swap(int*,int*);
int lamuto(int*,int,int);
void quicksort(int*,int,int);
int main(int argc, char* argv[]){
	int a[]={5,65,45,25,44,15,28,87,89,55};
	int len=sizeof(a)/sizeof(a[0]);
	printer(a,len);
	quicksort(a,1,len-1);
	printer(a,len);
	return 0;
}
void quicksort(int* a,int low,int high){
	if(low<high){
		int pivot=lamuto(a,low,high);
		quicksort(a,low,pivot-1);
		quicksort(a,pivot+1,high);
	}
}
int lamuto(int* a,int low,int high){
	int pivot=high;
	int i=-1,temp;
	for(int j=0;j<=high;j++){
		if(a[j]<a[pivot]){
			i++;
			swap(&a[i],&a[j]);
		}
	}
	i++;
	swap(&a[i],&a[pivot]);
	return i;
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
