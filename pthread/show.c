#include<stdio.h>
#include<unistd.h>

int main(){
	execvp("cat xyz.txt",NULL);
	return 0;
}
