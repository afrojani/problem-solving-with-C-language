#include <stdio.h>
int main()
{
    int totalRowNo, row, space, symbol;
    printf("Enter the number of rows: \n");
    scanf("%d", &totalRowNo);

    for (row = 1; row <= totalRowNo; row++)
    {
        // code for spcae
        for (space = 1; space <= (totalRowNo - row); space++)
        {
            printf(" ");
        }
        // code for symbols
        for (symbol = 1; symbol <= (2 * row - 1); symbol++)
        {
            if (row % 2 == 1)
                printf("^");
            else
                printf("*");
        }
        printf("\n");
    }

    return 0;
}