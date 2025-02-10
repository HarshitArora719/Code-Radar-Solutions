#include <stdio.h>
int main()
{
    int a,b;
    scanf("%d %d",&a,&b);
    if(a>b)
    {
        printf("True");
    }
    if(b>a or a==b)
    {
        printf("False");
    }
    return 0;
}