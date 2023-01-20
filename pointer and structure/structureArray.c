#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    double marks;
};

void printstudent(struct Student s)
{
    printf("Roll -> %d\n", s.roll);
    printf("Name -> %s\n", s.name);
    printf("Marks -> %lf\n", s.marks);
}

int main()
{
    struct Student cls[5];
    int i;
    for (i = 0; i < 5; i++)
    {
        scanf("%d", &cls[i].roll);
        scanf("%s", cls[i].name);
        scanf("%lf", &cls[i].marks);
    }
    double summ = 0;
    for (i = 0; i < 5; i++)
    {
        if (cls[i].roll % 2 == 0)
        {
            printstudent(cls[i]);
            summ += cls[i].marks;
        }
    }
    printf("Total marks %lf\n", summ);
    return 0;
}