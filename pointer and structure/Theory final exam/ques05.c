#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i, n;
    scanf("%d", &n);
    int *ara;
    ara = (int *)malloc(n * sizeof(int));
    if (ara == NULL)
    {
        printf("memory allocation failed.\n");
    }
    else
    {
        for (i = 0; i < n; i++)
        {
            scanf("%d", (ara + i));
        }
        for (i = 0; i < n; i++)
        {
            printf("%d\n", *(ara + i));
        }
    }
    free(ara);
    return 0;
}