#include <stdio.h>
#include <string.h>
void sort_string(char str[])
{
    int tmp;
    for (int j = 0; str[j] != '\0'; j++)
    {
        for (int i = 0; str[i] != '\0'; i++)
        {
            if (str[i] >= 'a' && str[i] <= 'z')
            {
                if (str[i] < str[i + 1])
                {
                    tmp = str[i];
                    str[i] = str[i + 1];
                    str[i + 1] = tmp;
                }
                if (str[i] == str[i + 1])
                    continue;
            }
        }
    }
    puts(str);
}
int main()
{
    char ara[100];
    fgets(ara, sizeof(ara), stdin);
    sort_string(ara);
    return 0;
}