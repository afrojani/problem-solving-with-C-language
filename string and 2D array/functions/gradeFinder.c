#include <stdio.h>
#include <string.h>

char yourGrade(int n)
{
    char A = 'A', B = 'B', C = 'C', F = 'F';
    if (n >= 80)
    {
        return A;
    }
    else if (n >= 60 && n < 80)
    {
        return B;
    }
    else if (n >= 40 && n < 60)
    {
        return C;
    }
    else if (n >= 0 && n < 40)
    {
        return F;
    }
}
int main()
{
    int n;
    scanf("%d", &n);
    char grade = yourGrade(n);
    printf("%c", grade);
    return 0;
}