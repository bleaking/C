#include<stdio.h>
int main(){
	struct citizen {
			int age;
			char* name;
			int forgs;
	};
	printf("%ld\n", sizeof(struct citizen));
	return 0;
}
