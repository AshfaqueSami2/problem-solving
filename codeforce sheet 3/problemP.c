#include<stdio.h>
int main()
{
    int x,i,count=0;
    scanf("%d",&x);
    int a[x];
    for(i=0;i<x;i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2!= 0)
            count++;
    }
    if(count==0)
    {
        int round=0,count1;
        while(count1==0)
        {

            for(i=0;i<x;i++)
            {
                a[i]/=2;
            }
            round++;
            count1=0;
            for(i=0;i<x;i++)
            {
                if(a[i]%2!=0)
                {
                    count1++;
                }
            }
        }
        printf("%d",round);
    }
    else
    {
            printf("0\n");
    }
    return 0;
}

