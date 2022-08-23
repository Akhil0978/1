#include<stdio.h>
#include<string.h>
void alpha (char[]);
int main()
{
    char str[1000];
    alpha(str);
    return 0;
}
void alpha(char s[])
{
    printf("Enter a string ");
    fgets(s,1000,stdin);
    int i;
    for (int i = 0; s[i] != '\0'; ++i)
     {
         if((s[i]>='a' && s[i]<='z') || (s[i]>='1' && s[i])<='9'  || s[i]>='A' && s[i]<='B')
            printf("The string is alphanumeric");
            break ;
     }
}
