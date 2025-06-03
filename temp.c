#include<stdio.h>
void valuechanger(int*);
void nextchanger(int**);
int main(int argc,char* argv[]){
	int x=9999;
	valuechanger(&x);
	printf("%d\n",x);
	return 0;
}
void valuechanger(int* a){
	nextchanger(&a);
}
void nextchanger(int** b){
	(**b)++;
}
