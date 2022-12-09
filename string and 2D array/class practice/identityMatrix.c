#include <stdio.h>
int main()
{
    int row, col, i, j;
    scanf("%d %d", &row, &col);
    int a[row][col];
    for (i = 0; i < row; i++)
    {
        for (j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    if (row == col)
    {
        int ans = 1;
        for (i = 0; i < row; i++)
        {
            for (j = 0; j < col; j++)
            {
                if (i == j)
                {
                    if (a[i][j] != 1)
                    {
                        ans = 0;
                    }
                    continue;
                }
                if (a[i][j] != 0)
                {
                    ans = 0;
                }
            }
        }

        if (ans == 1)
        {
            printf("identity\n");
        }
        else
        {
            printf("not identity\n");
        }
    }

    else
    {
        printf("not identity\n");
    }

    return 0;
}