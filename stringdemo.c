#include<stdio.h>
#include<string.h>
int main(){
	/*char* str1="Lucknow" ;
	char* str2 = "Lucklater"  ;
	printf("%d\n", strcmp(str1,str2));
	printf("%d\n",strncmp(str1,str2,4));*/
	char* str3="Lucnkow Junction";
	/*char ch='n';
	char* p1=strchr(str3,ch);
	char* p2=strrchr(str3,ch);
	printf("%s\n",p1);
	printf("%s\n",p2);
	char* p3=strchr(str3,'a');
	if(p3==NULL) printf("p3 is NULL \n");*/
	/*char* str4="now";
	char* p4=strstr(str3,str4);
	printf("%s\n",p4);
	char* str5 = "nowj";
	char* p5 =strstr(str3,str5);
	if(p5==NULL) printf("p5 is NUlL");*/
	char str[20]="Lucnkow";
	char* st=" juntion";
	char* p=strcpy(str,st);
	printf("%s\n",p);
	char* p2=strcpy(str,"EAST",2);
	printf("%s\n",p2);
	
	return 0;
}
