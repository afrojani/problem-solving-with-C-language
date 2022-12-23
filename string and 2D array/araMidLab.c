#include <stdio.h>
#include <string.h>
int main()
{
    int i, flag = 1, T, k;
    char ara[21];
    scanf("%d", &T);
    for (k = 0; k < T; k++)
    {
        scanf("%s", ara);
    }

    for (k = 0; k < T; k++)
    {
        int n = strlen(ara);
        printf("%d\n", n);
        for (i = 0; i < n; i++)
        {
            if (ara[i] != ara[n - i - 1])
            {
                flag = 0;
                break;
            }
        }
        if (flag == 0)
            printf("Not Palindrome\n");
        else
        {
            if (n <= 7)
            {
                printf("%s", ara);
                printf("\n");
            }
            else
            {
                printf("%c%d%c", ara[0], n - 2, ara[n - 1]);
            }
        }
    }
    return 0;
}