#include <stdio.h>
int main()
{
    int n,a[100000],b[100000],i,j,temp;
    scanf("%d",&n);
    for(i=0; i< n; i++)
    {
        scanf("%d",&a[i]);
    }
    for(i =0; i< n; i++)
    {
        scanf("%d",&b[i]);
    }

    for(i=0; i<n-1; i++)
    {
        for(j=0; j<n-1; j++)
        {
            if (a[j]>a[j+1])
            {
                temp=a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
            if (b[j]>b[j+1])
            {
                temp=b[j];
                b[j]=b[j+1];
                b[j+1]=temp;
            }
        }
    }
    int f=1;
    for(i=0; i<n; i++)
    {
        if(a[i]!=b[i])
        {
            f=0;
            break;
        }
    }
    if(f==1)
    {
        printf("yes\n");
    }
    else
    {
        printf("no\n");
    }

    return 0;
}

