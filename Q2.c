#include<stdio.h>
#include<string.h>
void reverse (char []);
int main()
{
    char str[100];
    reverse(str);
    return 0;
}
void reverse (char s[])
{
    printf("Enter a string ");
    fgets (s,100,stdin);
    printf("The reversed string is %s ",strrev(s));
}
