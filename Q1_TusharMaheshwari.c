#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
char buf[1000];
int fd1=open("input515.txt",O_RDWR,777);
int fd2=open("output535.txt",O_RDWR,777);
int len;
read(fd1,buf,200);
printf("data read=%s\n",buf);
len=write(fd2,buf,200);
printf("data written = %d \n",len);
close(fd1);
close(fd2);
return 0;
}