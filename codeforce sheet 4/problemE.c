#include <stdio.h>
#include <string.h>
int main()
{
    char s[1000010];
    int i,sum = 0;
    scanf("%s",s);
   int  x = strlen(s);
   for(i=0;i<x;i++)
    {
        if(s[i]>='0' && s[i]<='9')
    {
        sum += (s[i]-'0');
    }
    }
    printf("%d\n",sum);
    return 0;
}
