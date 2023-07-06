#include <stdio.h>
#include <string.h>
int main()
{
    char arr[101];
    fgets(arr, sizeof(arr), stdin);
    int l = strlen(arr) - 1;
    printf("%d ", l);
    int count = 0;
    for (int i = 0; i < l - 1; i++)
    {
        printf("i value %c ", arr[i]);
        for (int j = i + 1; j < l; j++)
        {
            printf("j value %c ", arr[j]);
            if (arr[i] == arr[j])
            {
                count++;
                break;
            }
        }

        printf("%d\n", count);
    }
    printf("%d\n", count);

    int distinct = l - count;
    if (distinct % 2 == 0)
        printf("CHAT WITH HER!");
    else if (distinct % 2 == 1)
        printf("IGNORE HIM!");

    return 0;
}