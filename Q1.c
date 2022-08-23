#include<stdio.h>
#include<string.h>
int len(char []);
int main()
{
    char str[100];
    int j=len(str);
    printf("The length of string is :%d",j);
    return 0;
}
int len(char s[])
{
    int l;
   printf("Enter a string \n");
   fgets(s,100,stdin);
   l=strlen(s);
   return l;
}
