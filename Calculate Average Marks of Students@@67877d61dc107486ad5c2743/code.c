#include <stdio.h>
struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
int main()
{
    int N;
    scanf("%d",&N);
    struct Student p[N];
    float c=0;
    for(int i=0;i<N;i++)
    {
        scanf("%d %s %f",&p[i].rollNo,p[i].name,&p[i].marks);
        c=c+p[i].marks;
    }
    float avg=c/N;
    printf("Average Marks: %.2f",avg);
    return 0;
}