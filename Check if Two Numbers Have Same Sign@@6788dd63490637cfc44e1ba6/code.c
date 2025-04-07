#include <stdio.h>
int main()
{
    int a,c;
    scanf("%d %d",&a,&c);
    if((a>0 && c>0)||(a<0 && c<0))
    {
        printf("Same Sign");
    }
    else
    printf("Different Sign");
    return 0;
}