#include<stdio.h>
#include<sys/statvfs.h>
#include<sys/stat.h>
int main(int argc, char** argv){
        // Statvfs is used ot retrieve system level information block size, totak blocks, and available blocks.
        struct stat statbuf0;
	struct statvfs statbuf1;
	if(statvfs(argv[1],&statbuf1)==-1){
		printf("Error occured \n");  
		return 0;
	}
	if(stat(argv[1],&statbuf0)==-1){
	        printf("Error occured \n");
	        return 0;
	}
	
	printf("Block size = [%lu] \n", statbuf.f_bsize);
	printf("Total number of blocks in file = [%lu] \n ",statbuf.f_blocks);
	printf("Name length of file possible = [%lu] \n ", statbuf.f_namemax);
	printf("Fragment size = [%lu] \n",statbuf.f_frsize);
	printf("Number of free blocks = [%lu] \n",statbuf.f_bfree);
	printf("Numeb of free blocks available  to non-superuser = [%lu] \n",statbuf.f_bavail);
	printf("Total number of file noder(idnode) = [%lu] \n",statbuf.f_files);
	printf("Number of free files nodes = [%lu] \n",statbuf.f_ffree);
	printf("Number of free files node (inodes) available to non-super user = [%lu] \n",statbuf.f_favail);
	printf("FileSystem ID = [%lu] \n",statbuf.f_fsid);
	printf("Mount flag = [%lu] \n",statbuf.f_flag);
	
	
	return 0;
}
