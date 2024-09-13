//
#include<stdio.h>
int main()
{
    int X,P;
    double A,RP;
    scanf("%d%d",&X,&P);

    //100-discount
    A = 100.00-X;

    RP = (100.00*P)/A;

    printf("%.2lf\n",RP);


    return 0;
}

