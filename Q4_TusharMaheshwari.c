#include<stdio.h>
#include<fcntl.h>
#include<unistd.h>

int main()
{
int fd,len;
char write_buf[16]="hi,how are you?";
char read_buf[16];
fd=open("linux_kerne46524.txt",O_CREAT|O_RDWR,777);
len=write(fd,write_buf,16);
printf("return value from write optn =%d\n",len);
lseek(fd,5,SEEK_SET);
read(fd,read_buf,len);
printf("data from buffer (read optn)=%s\n",read_buf);
close(fd);
return 0;
}
