#include<stdio.h>
void mergewithin(int*,int);
void printer(int*,int);
int main(int argc,char* argv[]){
	int a[]={2,4,6,10,15,20,3,7,18,30,35};
	int len=sizeof(a)/sizeof(a[0]);
	printer(a,len);
	mergewithin(a,len);
	printer(a,len);
	return 0;
}
void mergewithin(int* a, int len){
	int i=0,j=1;
	while(j<len && a[j]>a[j-1]) j++;
	int temp;
	while(i<j){
		while(a[i]<a[j]) i++;
		temp=a[j];
		int n=j-1;
		while(n>=i){
			a[n+1]=a[n];
			n--;
		}
		a[i]=temp;
		i++;
		j++;
	}
}
void printer(int* a, int len){
	for(int i=0;i<len;i++){
		printf("%d\t",a[i]);
	}
	printf("\n");
}
