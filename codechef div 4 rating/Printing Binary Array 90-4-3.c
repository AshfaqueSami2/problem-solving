#include<stdio.h>
int main()
{
    int t;
    int a;
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        int arr[100010];
        for(int i=0;i<a;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==0)
            {
                arr[i]=1;

                            }
            else{
                arr[i]=0;

        }
        printf("%d",arr[i]);
        }
        printf("\n");

    }

    return 0;
}


