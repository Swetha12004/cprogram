#include <stdio.h>
#include <stdlib.h>

int main()
{
   int a,reverse=0,rem;
   printf("enter a number");
   scanf("%d",&a);
   while(a!=0)
   {
       rem=a%10;
       reverse=reverse*10+rem;
       a/=10;
   }
   printf("reversed number is:%d",reverse);
}
