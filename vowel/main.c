#include <stdio.h>
#include <stdlib.h>

int main()
{
    char a;
    printf("enter character");
    scanf("%s",&a);
    if (a=='a'||a=='A')
        printf("vowel");
    else if (a=='e'||a=='E')
        printf("vowel");
    else if (a=='i'||a=='I')
        printf("vowel");
    else if (a=='o'||a=='O')
        printf("vowel");
    else if (a=='u'||a=='U')
        printf("vowel");
    else
        printf("consonant");

}
