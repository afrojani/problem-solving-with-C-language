#include <stdio.h>

int main()
{
    long long int n;
    int count = 0;
    printf("Integer: ");
    scanf("%lld", &n);
    while (n > 0)
    {
        n = n / 10;
        count += 1;
    }
    printf("%d digits", count);
    return 0;
}
