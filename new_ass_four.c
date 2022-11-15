#include <stdio.h>

int main()
{
    int n;
    int new_num;
    int sum = 0;
    printf("Integer: ");
    scanf("%d", &n);
    while (n > 0)
    {
        new_num = n % 10;
        sum += new_num;
        n = n / 10;
    };
    printf("%d", sum);
    return 0;
}