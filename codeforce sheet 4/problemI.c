#include<stdio.h>
#include<string.h>
int main()
{
    char c[1010];
    scanf("%s",c);
    int x = strlen(c);
    int flag = 0;
    for(int i = 0;i<x/2;i++)
    {
        if(c[i]!=c[x-i-1])
        {
            flag = 1;
            break;
        }
    }
    if(flag == 1)
    {
        printf("NO\n");
    }
    else
        printf("YES\n");
    return 0;
}
