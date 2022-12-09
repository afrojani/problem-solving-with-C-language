#include <stdio.h>
int main()
{
    char name[1200];
    gets(name);
    int i = 0, counter = 0;
    while (name[i] != '\0')
    {
        if (name[i] == 'a' || name[i] == 'e' || name[i] == 'i' || name[i] == 'o' || name[i] == 'u')
            counter++;
        i++;
    }
    printf("No of vowels= %d", counter);
    return 0;
}