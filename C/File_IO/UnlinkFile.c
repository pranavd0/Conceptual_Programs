#include<stdio.h>
#include<unistd.h>
#include<fcntl.h>

int main()
{
    int status=0;

    status=unlink("Demo.txt");

    if(status==-1)
    {
        printf("Unable to Delete\n");
        return-1;
    }
    else
    {
        printf("file got successfully deleted\n");
    }
    
    return 0;
}