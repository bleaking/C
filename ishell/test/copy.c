#include<stdio.h>
int main(){
	char s[]="hello i am ______\n";
	int i=0;
	printf("%s",s);
	FILE* fps=fopen("sample2.txt","a+");
	fputs(s,fps);
	printf("%s\n",s);
	fclose(fps);
	printf("\n");
	return 0;
}
