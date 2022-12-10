#include <stdio.h>
int main()
{
    int i, j, temp;
    int ara[8] = {12, 7, 9, 3, 15, 19, 1, 5};
    for (i = 0; i < 8; i++)
    {
        printf("%d ", ara[i]);
    }
    printf("\n");

    for (j = 0; j < 8; j++)
    // ekbar itereation cholle ekta value tar jayga moto sort hobe.evabe joto ta value otobar iteration chalailee sob gula jayga moto bosbe

    {
        for (i = 0; i < (8 - 1); i++)
        {
            if (ara[i] > ara[i + 1])
            {
                temp = ara[i];
                ara[i] = ara[i + 1];
                ara[i + 1] = temp;
            }
        }

        for (i = 0; i < 8; i++)
        {
            printf("%d ", ara[i]);
        }
        printf("\n");
    }

    return 0;
}