#include <stdio.h>
int main()
{
    char a;
    scanf("%c",&a);
    if(a==a)
    {
        printf("Vowel");
    }
    else if(a!=a)
    {
        printf("Consonant");
    }
    else
    {
        printf("Digit");
    }
    return 0;
}