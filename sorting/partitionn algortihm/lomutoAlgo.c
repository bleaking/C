#include<stdio.h>
void printer(int*,int);
int lamutoAlgo(int*,int,int);
void swap(int*,int*);
int main(int argc, char* argv[]){
	int a[]={3,4,2,8,7,1,5};
	int len=sizeof(a)/sizeof(a[0]);
	printer(a,len);
	lamutoAlgo(a,0,len-1);
	printer(a,len);
}
int lamutoAlgo(int* a,int low,int high){
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

