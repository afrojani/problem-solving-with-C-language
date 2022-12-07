#include <stdio.h>
#include <string.h>
int main()
{
    char name[100];
    fgets(name, sizeof(name), stdin);
    int l = strlen(name) - 1;
    // ekhane string length theke 1 minus kora hoise karon input e enter chaple oita keo ekta character dhore ney.

    if (l > 10)
    {
        printf("%c%d%c", name[0], l - 2, name[l - 1]);
    }
    else
    {
        puts(name);
    }
    return 0;
}