#include <stdio.h>
int main()
{
    int a1 = 0, a2 = 1;
    int next = a1 + a2;
    int n, i;
    printf("enter the number upto which fibonacci will be print: ");
    scanf("%d", &n);

    printf("Fibonacci Series: %d, %d, ", a1, a2);

    for (i = 3; i <= n; i++)
    {
        printf("%d, ", next);

        a1 = a2;
        a2 = next;
        next = a1 + a2;
    }
    return 0;
}