#include<stdio.h>
int main(){
	int td[][5]={{1,2,3,4,5},{2,4,6,8,10},{1,3,5,7,9},{10,20,30,40,50}};
	td[2][2]=31;
	for(int i=0;i<4;i++){
		for(int j=0;j<5;j++){
			printf("%d\t",*(*(td+i)+j));
		}
	printf("\n");
	}
printf("%d",*((*td)+5));
/*0	printf("%d\n",*td[0]);
	printf("%d\n",*(*td));
	printf("%d\n",*(*(td+2)+3));
*/
	return 0;
}
