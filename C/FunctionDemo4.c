#include <stdio.h>

int main()
{
    int value1=0,value2=0,ans=0;

    printf("Enter First no.");
    scanf("%d",&value1);

    printf("Enter Second no.");
    scanf("%d",&value2);

    ans=value1+value2;         //business logic

    printf("addition is: %d\n",ans);

    
    return 0;
}