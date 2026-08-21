#include <stdio.h>

int Addition(int n1, int n2)
{
    int result=0;
    result=n1+n2;          //business logic

    return result;
}

int main()
{
    int value1=0,value2=0,ans=0;

    printf("Enter First no.");
    scanf("%d",&value1);

    printf("Enter Second no.");
    scanf("%d",&value2);

    ans=Addition(value1,value2);

    printf("Adition is %d\n",ans);

    return 0;
}