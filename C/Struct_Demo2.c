#include <stdio.h>
struct Demo
{
    int i;
    char ch;
    float f;
    double d;
};


int main()
{
    printf("%d\n", sizeof(struct Demo));
    return 0;
}