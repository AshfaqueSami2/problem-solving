#include<stdio.h>
int main()
{
    int r,c,x,i,j;
    int arr[100][100];
    scanf("%d%d",&r,&c);
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d",&x);
    int flag=0;
        for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            if(arr[i][j] == x)
            {
                flag=1;
            }
        }
    }
    if(flag==1)
    {
        printf("will not take number\n");
    }
    else printf("will take number\n");




    return 0;
}
