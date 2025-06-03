#include<stdio.h>
int main(){
	char name[50];
	printf("Enter a name \n");
	scanf("%[^\n]s",&name[0]); // &name  will also by default start from index 0
	printf("name is %s\n",name);
	return 0;
}
