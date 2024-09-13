#include<stdio.h>
#include<string.h>
int main()
{
    char s[30],s1[30];
    scanf("%s%s",s,s1);
    int x;
    x = strcmp(s,s1);
    if(x<=0)
    {
        printf("%s",s);
    }
    else
        printf("%s",s1);
    return 0;
}

