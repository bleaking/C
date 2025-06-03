#include<stdio.h>
int main(){
	/*Literals that can be used as case identifiers can be integers and characters.*/
	int option;
	printf("Enter option value \n");
	scanf("%d",&option);
	switch(option){
		case 'C':
		printf("Case C \n");
		break;
		case 2:
		printf("case 2 \n");
		break;
		case 'A':
		printf("case A \n");
		break;
		default:
		printf("Default Case \n");
		break;
	}
	return 0;
}
