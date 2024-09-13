#include <stdio.h>
int main()
{
    int x,y,n,i,j;
    int arr[10010];
    scanf("%d",&x);
   for(y=0;y<x;y++)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%lld",&arr[i]);
        }
        long long minsum = 10000000 ;

        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int sum = arr[i] + arr[j] + j - i;
                if(sum < minsum)
                {
                    minsum = sum;
                }
            }
        }
        printf("%lld\n", minsum);
    }
    return 0;
}

