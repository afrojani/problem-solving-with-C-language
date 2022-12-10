#include <stdio.h>
#include <string.h>
int main()
{
    int i;
    char a[102], b[102];
    fgets(a, sizeof(a), stdin);
    fgets(b, sizeof(b), stdin);

    int l = strlen(a);
    // printf("%d\n", &l);

    for (i = 0; i < l; i++)
    {
        if (a[i] >= 'A' && a[i] <= 'Z')
            a[i] += 32;
        if (b[i] >= 'A' && b[i] <= 'Z')
            b[i] += 32;
    }

    int same = 1;
    for (i = 0; i < l; i++)
    {
        if (a[i] > b[i])
        {
            same = 0;
            printf("1\n");
            break;
        }

        else if (a[i] < b[i])
        {
            same = 0;
            printf("-1\n");
            break;
        }
    }

    if (same == 1)
    {
        printf("0\n");
    }

    return 0;
}