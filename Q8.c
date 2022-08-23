#include<stdio.h>
#include<string.h>
int words (char[]);
int main()
{
    char str[1000],a;
    a=words(str);
    printf("The total no. of words in string is %d ",a);
}
int words (char s[])
{
    int i, count=0;
    printf("Enter a string \n ");
    fgets(s,1000,stdin);
    for(i=0;s[i]!='\0';i++)
    {
        if((s[i]==' ' || s[i] == '\n' || s[i] == '\t'))
        {
            count++;
        }
    }
    return count;
}
