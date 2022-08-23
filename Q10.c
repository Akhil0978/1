#include<stdio.h>
#include<string.h>
void duplicate (char[]);
int main()
{
    char str[1000];
    duplicate (str);
    return 0;
}
void duplicate (char s[])
{
    printf("Enter any string \n");
    fgets(s,1000,stdin);
    int count=0,i,j;
    for(i=0;i<strlen(s);i++)
    {
        count=1;
        for(j=i+1;j<strlen(s);j++)
        {
            if(s[i] == s[j] && s[i] != ' ')
            {
                count ++;
                s[j]='0';
            }
        }
        if(count>1 && s[i] != '0')
        printf("%c",s[i]);
    }
}
