#include <stdio.h>
int main()
{
    int a;
    char d;
    d=a%10;
    scanf("%d",&a);
    if(d==1 || a%2==0)
    {
        printf("Set");
    }
    else
    {
        printf("Not Set");
    }
    return 0;
}