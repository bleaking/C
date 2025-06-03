#include<stdio.h>
#include<string.h>
void rev(char* s){
	 int count;
	for(int i=0; i<strlen(s);i++){
		count =0;
		if(s[i]==' ') continue;
		for(int j=0;j<strlen(s);j++){
			if(s[i]==s[j] && j>=i) count++;
			else if(j<i && s[i]==s[j]) break;
		}
		if(count>0)
		printf("%c -- %d \n" , s[i],count);
	}
}
int main(){
	char name[] = "Lucknow  junction" ;
	printf("%s\n", name);
	rev(name);
	printf("%s\n",name );
	return 0;
}
