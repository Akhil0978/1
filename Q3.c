#include<stdio.h>
#include<string.h>
void compare (char[],char[]);
int main()
{
    char str[1000],syr[1000];
    compare(str,syr);
    return 0;
}
void compare(char s[],char y[])
{
    printf("Enter first string \n");
    fgets(s,1000,stdin);
    printf("Enter second string \n");
    fgets(y,1000,stdin);
    int i=strcmp(s,y);
    if(i==0)
        printf("Strings are same");
    else
        printf("Strings sre not same ");
}
