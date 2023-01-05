#include <stdio.h>
int S(int n)
{
    if (n == 1)
        return 1;
    else
        return S(n - 1) + n;
}
int main()
{
    int n;
    scanf("%d", &n);
    int summ = S(n);
    printf("%d\n", summ);
    return 0;
}