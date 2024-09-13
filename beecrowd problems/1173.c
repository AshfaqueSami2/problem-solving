#include<stdio.h>
int main()
{
    int n,i;
    scanf("%d",&n);
    int x[10];
    x[0] = n;
    printf("N[0] = %d\n", x[0]);

    for(i=1;i<10;i++)
    {
        x[i] = x[i-1] * 2;
        printf("N[%d] = %d\n",i,x[i]);
    }



    return 0;
}

