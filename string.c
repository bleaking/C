#include<stdio.h>
int main(){
	char name[]={'L','U','C','K','N','O','W'};
	char city[]="LUCKNOW"  ;
	char *location="Lucknow" ;
	city[0]='T';
	*location='Y';
	printf("%s\n",name);
	printf("%s\n",city);
	printf("%s\n",location);
	location="kanpur" ;
	printf("%s\n" , location);
	return 0;
}
