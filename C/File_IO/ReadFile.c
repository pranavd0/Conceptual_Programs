#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int fd =0;
    char Arr[20]={'\0'};

    fd= open("Hello.txt",O_RDONLY);

    if(fd==-1)
    {
        printf("unable to Open the file\n");
        return -1;
    }
    else
    {
        printf("file gets opened with fd %d\n",fd);

        read(fd,Arr,13);

        printf("Data From File is : %s\n",Arr);

        close(fd);
    }
    return 0;
}