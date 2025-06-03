#include<stdio.h>
int LinearSearch(int*,int,int);
void PrintArray(int*,int);
int main(){
	int a[]={15,7,9,25,8,39,59,79};
	int len=sizeof(a)/sizeof(a[0]);
	int target;
	printf("shuffling......\n");
	PrintArray(a,len);
	printf("Enter a number  to search\n");
	scanf("%d",&target);
	int num=LinearSearch(a,target,len);
	if(num==-1)
	        printf("trust me bro i looked",target);
	else
		printf("Guess where i found %d \nAt %d's",target,num);
return 0;
}
int LinearSearch(int* a, int t, int len){
int b=-1;
for(int i=0;i<len;i++){
	if(a[i]==t){
		b=i;
		break;
		}
	}
	return b;
}
void PrintArray(int* a,int len){
	printf("{");
	for(int i=0;i<len;i++)
		printf("%d,",a[i]);
	printf("}\n\n");
}
