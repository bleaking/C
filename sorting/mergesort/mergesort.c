#include<stdio.h>
#include<stdlib.h>
void printer(int*, int);
int* merge(int*,int,int*,int);
int main(int argc, char* argv[]){
	int a[]={2,8,12,15,17,48};
	int b[]={3,7,9,14,18,19};
	int lena=sizeof(a)/sizeof(a[0]);
	int lenb=sizeof(b)/sizeof(b[0]);
	int* result=merge(a,lena,b,lenb);
	printer(result,lena+lenb);
	return 0;
}
int* merge(int* a, int lena, int* b, int lenb){
	int* temp=(int*)calloc((lena+lenb),sizeof(int));
	int k=0;
	int i=0;
	int n=0;
	while(k<lena+lenb){
		if(a[i]<b[n]){
			temp[k]=a[i];
			i++;
		}
		else if(a[i]>b[n]){
			temp[k]=b[n];
			n++;
		}
	k++;
	}
  return temp;
}
void printer(int* arr, int len){
  printf("arr[%d]={",len);
  for(int i=0;i<len;i++){
    printf("%d, ",arr[i]);
  }
  printf("};\n");
}
