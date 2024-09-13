#include<stdio.h>
int main()
{
    int i,t,n,total,l,C=0,R=0,S=0;
    char c;
    double x,y,z;
    scanf("%d",&n);
    for(i = 0; i < n;i++)
    {
        scanf("%d %c",&l,&c);
        if (c=='S')
        {
            S+=l;
        }

        else if(c=='R')
        {
            R+=l;
        }
        else if(c=='C')
        {
            C+=l;
        }

    }
    total=C+S+R;
    x=(C*100.00)/total;
    y=(R*100.00)/total;
    z=(S*100.00)/total;
    printf("Total: %d cobaias\n",total);
    printf("Total de coelhos: %d\n",C);
    printf("Total de ratos: %d\n",R);
    printf("Total de sapos: %d\n",S);
    printf("Percentual de coelhos: %.2lf %%\n",x);
    printf("Percentual de ratos: %.2lf %%\n",y);
    printf("Percentual de sapos: %.2lf %%\n",z);
    return 0;
}
