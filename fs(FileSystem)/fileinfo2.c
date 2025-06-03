#include<sys/stat.h>
#include<stdio.h>
int main(int argc, char** argv){
  struct stat statbuf;
  if(stat("abc.txt",&statbuf)==-1){
    printf("Error occured\n");
    return 0;
  }
  printf("Id of device on which file resides = %lu\n",statbuf.st_dev);
  printf("Inode no of file = %lu\n",statbuf.st_ino);
  printf("File type & permission = %lu\n",statbuf.st_mode);
  printf("No. of hards links to file = %lu\n",statbuf.st_nlink);
  return 0;
}
