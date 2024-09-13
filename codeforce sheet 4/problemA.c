#include<stdio.h>
#include<string.h>
int main()
{
    char s[1000],s1[1000];
    scanf("%s%s",&s,&s1);
    int len1 = strlen(s);
    int len2 = strlen(s1);
    printf("%d %d\n",len1,len2);
    printf("%s %s",s,s1);

    return 0;
}
