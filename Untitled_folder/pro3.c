#include<stdio.h>
#include<sys/types.h>
#include<sys/stat.h>
#include<fcntl.h>
#include<stdlib.h>
#include<windows.h>
int main()
{   int fd,c;
fd = open("COM6",O_RDONLY);
printf("fd value is : %d\n",fd);
if (fd == -1)
{
    perror("Device not found");
    exit(1);
}
printf("\nFile created succesfully");
while ((c=getchar())!=EOF)
putchar(c);
}