#include<stdio.h>
#include<string.h>
void upper (char []);
int main()
{
    char str[100];
    upper(str);
    return 0;
}
void upper (char s[])
{
    printf("Enter a string ");
    fgets (s,100,stdin);
    printf(" %s ",strupr(s));
}

