#include <stdio.h>
#include <string.h>
void sort_string(char str[])
{
    int tmp;
    for (int i = 0; str[i] != '\0'; i++)
    {
        if (i % 2 == 0)
        {
            printf("%c", str[i]);
        }
        else if (i % 2 == 1)
        {
            printf("%c", str[i]);
            printf("%c", str[i]);
        }
    }
}
int main()
{
    char ara[100];
    fgets(ara, sizeof(ara), stdin);
    sort_string(ara);
    return 0;
}