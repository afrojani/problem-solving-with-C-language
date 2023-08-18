#include <stdio.h>
int main()
{
    int n, i, j;
    scanf("%d", &n);
    int input[n];
    // ekhane array input nise.
    for (i = 0; i < n; i += 1)
    {
        scanf("%d", &input[i]);
    }
    // array er first element ta k largest dhore nilam.
    int largestElement = input[0];

    // loop chalaye actual largest element ta ber korbo.
    for (i = 1; i < n; i += 1)
    {
        if (input[i] > largestElement)
        {
            largestElement = input[i];
        }
    }
    // largest element er cheye ek beshi ekta notun array declare korlam.
    int arr[largestElement + 1];
    // notun array er sob value 0 kore nilam.
    for (i = 0; i <= largestElement; i += 1)
    {
        arr[i] = 0;
    }
    /* main input array er proti ta element k index dhore new array te
     oi index er against e 1 kore barabo.*/
    for (i = 0; i < n; i += 1)
    {
        arr[input[i]] += 1;
    }

    /*new array te proti ta index e joto ta element hoise seta k j dhore loop ghuraye
     print korlei sorted array chole asbe.*/
    for (i = 0; i <= largestElement /*&& i != 0*/; i += 1)
    {
        // printf("%d", arr[i]);
        for (j = 0; j < arr[i]; j++)
        {
            printf("%d", i);
        }
    }

    int duplicate = 0, unique = 0;
    for (i = 0; i <= largestElement; i += 1)
    {
        if (arr[i] == 1)
            unique += 1;
        else if (arr[i] > 1)
            duplicate += 1;
    }
    printf("\nTotal duplicate element found  %d\n", duplicate);
    printf("Total unique element found  %d\n", unique);
    return 0;
}
