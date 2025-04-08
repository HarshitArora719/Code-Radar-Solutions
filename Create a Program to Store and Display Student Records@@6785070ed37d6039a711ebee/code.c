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
    for(int i=0;i<N;i++)
    {
        scanf("%d %s %f",&p[i].rollNo,p[i].name,&p[i].marks);
        printf("Roll Number: %d,",p[i].rollNo," Name: %s,",p[i].name," Marks: %f",p[i].marks);
    }
    return 0;
}