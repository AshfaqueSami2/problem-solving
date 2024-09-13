#include <stdio.h>
#include<stdlib.h>
int main()
{
    int x,i,j,dankona=0,bamkona=0;
    scanf("%d",&x);
    int a[x][x];
    for(i=0;i<x;i++)
    {
        for(j=0;j<x;j++)
        {
            scanf("%d",&a[i][j]);
            if(i==j)
            {
                dankona+=a[i][j];
            }
            if(i+j==x-1) {
                bamkona+=a[i][j];
            }
        }
    }
    printf("%d\n",abs(dankona-bamkona));
    return 0;
}

