#include<stdio.h>
struct protocol{
  unsigned int mask:4;
  unsigned int checksum:3;
 }tcp;
int main(){
  tcp.mask=15;
  printf("%d\n",tcp.mask);
  tcp.mask=17;
  printf("%d\n",tcp.mask);
  printf("%d\n",(int)sizeof(tcp));
  return 0;
  }
