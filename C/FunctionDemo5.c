#include <stdio.h>

void Addition(int n1, int n2)
{
    int result=0;
    result=n1+n2;          //business logic

    printf("addition is:%d\n",result);
}

int main()
{
    int value1=0,value2=0;

    printf("Enter First no.");
    scanf("%d",&value1);

    printf("Enter Second no.");
    scanf("%d",&value2);

    Addition(value1,value2);

    return 0;
}