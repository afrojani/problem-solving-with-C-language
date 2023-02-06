#include <stdio.h>
struct Student
{
    int roll;
    char name[50];
    double marks;
};

void printstudent(struct Student s)
{
    printf("Displaying Information:\n");
    printf("Name: %s\n", s.name);
    printf("Roll number: %d\n", s.roll);
    printf("Marks: %0.2lf\n", s.marks);
}

int main()
{
    struct Student st;
    printf("Enter Information:\n");
    printf("Enter name: ");
    scanf("%s", st.name);
    printf("Enter roll number: ");
    scanf("%d", &st.roll);
    printf("Enter marks: ");
    scanf("%lf", &st.marks);

    printstudent(st);
    return 0;
}