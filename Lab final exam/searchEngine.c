#include <stdio.h>
int main()
{
    int t, k;
    scanf("%d", &t);
    for (k = 1; k <= t; k++)
    {
        int n, s;
        scanf("%d", &n);
        int arr[n];
        for (int i = 1; i <= n; i++)
        {
            scanf("%d", &arr[i]);
        }
        scanf("%d", &s);
        int flag = 0, index = 0;
        for (int i = 1; i <= n; i++)
        {

            if (arr[i] == s)
            {
                flag = 1;
                index = i;
                break;
            }
        }
        if (flag == 1)
            printf("Case %d: %d", k, index);
        else if (flag == 0)
            printf("Case %d: Not Found", k);

        printf("\n");
    }

    return 0;
}