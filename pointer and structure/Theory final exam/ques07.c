#include <stdio.h>
int main()
{
    int n, m, i, j;
    scanf("%d %d", &n, &m);
    int mat[n][m];
    int mat2[n][m];
    int summ[n][m];
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            summ[i][j] = mat[i][j] + mat2[i][j];
        }
    }
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < m; j++)
        {
            printf("%d ", summ[i][j]);
        }
        printf("\n");
    }

    return 0;
}