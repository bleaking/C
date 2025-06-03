#include<stdio.h>
int max(int*,int);
//int semax(int*,int,int);
int maxNum(int*,int);
int main(){
	int arr[]={58,78,35,14,2,5,45,55};
	int len=sizeof(arr)/sizeof(arr[0]);
// Bubble sort
/*
int keep;
	for(int n=0; n<len-1; n++){
	for(int i=0; i<len; i++){
		if(arr[i]>arr[i+1]){
			keep=arr[i];
			arr[i]=arr[i+1];
			arr[i+1]=keep;
		}
	    }
	}
*/
/*
int maxo = max(arr,len);
int secmax = semax(arr,len,maxo);
printf("maxo %d\n",maxo);
printf("secmax %d\n",secmax);
return 0;
}
int max(int arr[],int len){
    int max = arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>max)
            max=arr[i];
     }
     return max;
}
int semax(int arr[],int len, int max){
    int secmax=arr[0];
    for(int i=0;i<len;i++){
        if(arr[i]>secmax && arr[i]<max)
            secmax=arr[i];
    }
    return secmax;
}
*/
     int second_max=maxNum(arr,len);
     printf("secmax = %d \n",second_max);
return 0;
}
int maxNum(int arr[],int len){
    int max=-1,smax=-1;
    for(int i=0;i<len;i++){
      if(arr[i]>=max){
        smax=max;
        max=arr[i];
      }else if(arr[i]>smax){
        smax=arr[i];
      }
    }
    return smax;
}
