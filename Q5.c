#include<stdio.h>
#include<string.h>
void lower (char []);
int main()
{
    char str[100];
    lower(str);
    return 0;
}
void lower (char s[])
{
    printf("Enter a string ");
    fgets (s,100,stdin);
    printf(" %s ",strlwr(s));
}

