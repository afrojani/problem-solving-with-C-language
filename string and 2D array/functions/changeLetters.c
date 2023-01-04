#include <stdio.h>
#include <string.h>

void changeChar(char name[], int n)
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            if (name[i] + n > 'z')
            {
                name[i] = ((name[i] + n) - 26);
            }
            else
                name[i] += n;
    }
    puts(name);
}

int main()
{
    char str[100];
    fgets(str, sizeof(str), stdin);
    int n;
    scanf("%d", &n);
    changeChar(str, n);
    return 0;
}