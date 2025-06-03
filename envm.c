#include<stdio.h>
#include<stdlib.h>
int main(int argc, char** argv, char** envp){
	printf("%s\n", getenv("PATH"));
	return 0;
}
