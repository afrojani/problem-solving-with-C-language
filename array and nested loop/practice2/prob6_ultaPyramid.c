#include <stdio.h>
int main()
{
    int totalRowNo, row, col, symbol;
    printf("Enter the number of rows: \n");
    scanf("%d", &totalRowNo);

    for (row = totalRowNo; row >= 1; row--)
    {
        // code for spcae
        for (col = 1; col <= (totalRowNo - row); col++)
        {
            printf(" ");
        }
        // code for symbols
        for (symbol = 1; symbol <= (2 * row - 1); symbol++)
        {
            printf("*");
        }
        printf("\n");
    }

    return 0;
}