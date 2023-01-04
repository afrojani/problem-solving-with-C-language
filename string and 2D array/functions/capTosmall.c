#include <stdio.h>
#include <string.h>

void changeChar(char name[])
{
    int i;
    for (i = 0; name[i] != '\0'; i++)
    {
        if (name[i] >= 'a' && name[i] <= 'z')
            name[i] -= 32;
        else if (name[i] >= 'A' && name[i] <= 'Z')
            name[i] += 32;
    }
    puts(name);
}

int main()
{
    char name[100];
    fgets(name, sizeof(name), stdin);
    changeChar(name);
    return 0;
}