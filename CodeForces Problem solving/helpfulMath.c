#include <stdio.h>
#include <string.h>
int main()
{
    char s[101];
    // fgets(s, sizeof(s), stdin);
    scanf("%s", s);
    int a[101];
    int i, n = 0, j, k;
    for (i = 0; s[i] != '\0'; i++)
    {
        // printf("%c ", s[i]);
        if (s[i] == '+')
        {
            continue;
        }
        else
        {
            a[n] = (int)s[i] - 48;
            n++;
        }
    }
    // printf("%d\n", n);
    for (k = 0; k < n; k++)
    {
        for (j = 0; j < n - 1; j++)
        {
            int temp = a[j];
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }
    for (j = 0; j < n; j++)
    {
        if (j == (n - 1))
        {
            printf("%d\n", a[j]);
        }
        else
        {
            printf("%d+", a[j]);
        }
    }
    return 0;
}