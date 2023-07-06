#include <stdio.h>
#include <string.h>

int main()
{
    char arr[1000];
    fgets(arr, sizeof(arr), stdin);

    if (arr[0] >= 97)
    {
        arr[0] = arr[0] - 32;
    }

    puts(arr);
    return 0;
}