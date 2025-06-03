#include<stdio.h>
#include<stdlib.h>
#include<string.h>
void KMPSearch(char*,char*);
void fillups(char*,int*);
int main(int argc ,char* argv){
  char* str="ABCAABACCABABAAB";
  char* pattern="ABABA";
  KMPSearch(str,pattern);
  return 0;
}
void fillups(char* str, int* lps){
  int i=1;
  int j=0;
  int len=strlen(str);
  lps[0]=0;
  while(i<len){
    if(str[i]==str[j]){
      lps[i]=j+1;
      i++;
      j++;
    } else{
    if(j==0){
      lps[i]=0;
      i++;
    } else{
      j=lps[j-1];
      }
    }
  }
}

void KMPSearch(char* str, char* pattern){
  int n=strlen(str);
  int m=strlen(pattern);
  int lps[m];
  fillups(pattern,lps);
  int i=0,j=0;
  while(i<n){
    if(str[i]==pattern[i]){
      i++;
      j++;
      printf("%d\n",i);
    }
    else if(j==m){
      printf("pattern found at %d \n",i-j);
      return;
    } 
    else if(i<n && pattern[j] != str[i]){
      if(j!=0){
        j=lps[j-1];
      }else{
        i=i+1;
      }
    }
  }
  printf("Pattern not found \n");
}
