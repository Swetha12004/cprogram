#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a,b;
    printf("enter two numbers");
    scanf("%d %d",&a,&b);
    if(a>b)
        printf("a is greater");
    else
        printf("b is greater");
}
