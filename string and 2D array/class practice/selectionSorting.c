#include <stdio.h>
int main()
{
    int i, j;
    int ara[8] = {12, 7, 9, 3, 15, 19, 1, 5};
    int sorted_ara[8];
    for (i = 0; i < 8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");
    int max, max_indx;
    for (i = 0; i < 8; i++)
    // ei iteration ta kora hocche joto element tototar jonno...karon proti iteration e just ekta value tar jayga moto boshe.
    {
        max = ara[0];
        max_indx = 0;
        for (j = 0; j < 8; j++)

        // ar ei iteration ta hocche proti bar ekta max dhore dekha j oi max er cheye r kono ta boro ase naki

        {
            if (ara[j] > max)
            {
                max = ara[j];
                max_indx = j;
            }
        }
        sorted_ara[i] = max;
        ara[max_indx] = 0;
        for (j = 0; j < 8; j++)
        {
            printf("%d ", ara[j]);
        }
        printf("\n");
    }
    for (i = 0; i < 8; i++)
    {
        printf("%d ", sorted_ara[i]);
    }
    printf("\n");

    return 0;
}