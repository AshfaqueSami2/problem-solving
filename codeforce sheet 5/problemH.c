#include <stdio.h>
void charN(int n,char c)
{
    int i;
    for(i=0;i<n;i++)
    {
        printf("%c ",c);
    }
    printf("\n");
}

int main()
{
    int x,n,i;
    char c;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d %c",&n,&c);
        charN(n,c);
    }
    return 0;
}

