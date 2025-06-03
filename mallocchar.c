#include<stdio.h>
#include<stdlib.h>
int main(){	
char* cp = (char*)malloc(4);
*cp='A';
*(cp+1)='B';
*(cp+2)='C';
*(cp+3)='D';
for(int i=0;i<4;i++){
	printf("%c\n",cp[i]);
}
return 0;
}
