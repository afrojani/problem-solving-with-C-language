#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    char s[n];
    scanf("%s", s);
    int freq[26] = {0};
    int i, j, count = 0;
    for (i = 0; s[i] != '\0'; i++)
    {
        freq[s[i] - 97]++;
    }
    for (i = 0; i < 26; i++)
    {
        if (freq[i] == 1)
        {
            count++;
        }
    }
    printf("%d\n", count);
    return 0;
}