#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>
#include<sys/stat.h>




int main()
{
struct stat st;
int fd;
fd=open("P1.c",O_RDONLY);
fstat(fd,&st);
printf("file size =%lu\n",(st.st_size));
printf("file inode=%lu \n",st.st_ino);
printf("size of disc of blocks =%lu \n",st.st_blksize);
printf("\n\n");
close(fd);
return 0;
}
