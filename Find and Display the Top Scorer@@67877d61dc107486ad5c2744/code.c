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
    struct Student h=p[1];
    for(int i=0;i<N;i++)
    {
        scanf("%d %s %f",&p[i].rollNo,p[i].name,&p[i].marks);
        if(p[i].marks>h.marks)
        {
            h=p[i];
        }
    }
    printf("Top Scorer: Roll Number: %d, Name: %s, Marks: %.2f\n",h.rollNo,h.name,h.marks);
    return 0;
}