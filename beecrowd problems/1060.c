#include<stdio.h>
int main()
{
    double x;
    int i=1,n;
    n=0;
    while(i<=6)
    {

        scanf("%lf",&x);

        if(x>0)

    {
        n++;
    }
    i++;
    }
    printf("%d valores positivos\n",n);

    return 0;
}
