#include <stdio.h>
int main()
{
    int a, b;
    printf("enter two numbers: ");
    scanf("%d%d", &a, &b);
    if (a % b == 0)
    {
        printf("%d is divisible by %d", a, b);
    }
    else if (b % a == 0)
    {
        printf("%d is divisible by %d", b, a);
    }
    else
    {
        printf("None of them are divisible by the other.");
    }
    return 0;
}