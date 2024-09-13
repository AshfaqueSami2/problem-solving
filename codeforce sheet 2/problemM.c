#include <stdio.h>
int main()
{
    int i,a,b,f=0;
    scanf("%d%d",&a,&b);
    for(i=a;i<=b;i++)
    {
        int n = i;
        int lucky = 1;
        while(n > 0)
        {
            int digit = n % 10;
            if (digit != 4 && digit != 7) 
            {
               lucky = 0;
                break;
            }
            n/=10;
        }
        if (lucky!=0)
        {
            printf("%d ",i);
            f = 1;
        }
    }
    if (f==0)
    {
        printf("-1");
    }
    printf("\n");
    return 0;
}
