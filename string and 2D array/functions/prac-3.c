#include<stdio.h>
int is_Vowel(char x)
{
    if(x=='a'|| x=='e' || x=='i' || x=='o' || x=='u')
    return 1;
    else
    return 0;
}
int main()
{
    char ch;
    ch=getchar();
    getchar();

    if(is_Vowel(ch)==1)
    printf("the character is a vowel.\n");
    else
    printf("Consonant\n");
    return 0;
}