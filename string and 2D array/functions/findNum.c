#include <stdio.h>
#include <string.h>

int findChar(char name[], char ch)
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] == ch)
            return 1;
    }
    return 0;
}

int main()
{
    char name[100];
    fgets(name, sizeof(name), stdin);
    int case1 = findChar(name, '1');
    int case2 = findChar(name, '9');
    int case3 = findChar(name, '7');

    if (case1 == 1 && case2 == 1 && case3 == 1)
    {
        printf("Yes");
    }
    else
        printf("No");
    return 0;
}