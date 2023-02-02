#include <stdio.h>
void sort_string(char s[])
{
    int freq[26] = {0};
    int i, j;
    for (i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
        for (j = 0; j < freq[i]; j++)
        {
            printf("%c", i + 97);
        }
    }
}

int main()
{
    char s[100];
    scanf("%s", s);
    sort_string(s);
    return 0;
}
