#include<stdio.h>
int main()
{
    int i,n;
    double a,b,c;
    scanf("%d",&n);
    for(i=1;i<=n;i++)

    {
        scanf("%lf%lf",&a,&b);
        c = a/b;
        if(b==0)
        {
            printf("divisao impossivel\n");
        }
        else
        {
            printf("%.1lf\n",c);
        }

    }


    return 0;
}
