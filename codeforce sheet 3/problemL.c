#include<stdio.h>
int main()
{
    int a[100010],m,t,n,k,y=-100010,x,j,i;

    scanf("%d",&t);
    for(m=1 ; m<=t ; m++)
    {

        scanf("%d", &n);

        for(i=1 ; i<=n ; i++)
        {
            scanf("%d", &a[i]);
        }

        for(i=1 ; i<=n ; i++)
        {
            printf("%d ", a[i]);
        }
        for(i=1 ; i<=n-1 ; i++)
        {

            for(j=i+1 ; j<=n ; j++)
            {
                y=-100010;
                for(k=i ; k<=j ; k++)
                {
                    if(a[k]>y)
                    {
                        y=a[k];
                    }


                }
                printf("%d ", y);


            }

        }
        printf("\n");
    }
    return 0;
}
