#include<stdio.h>
int main()
{
    double X,Y,price;
    scanf("%lf%lf",&X,&Y);

    if(X==1)
    {
        price = Y*4.00;
        printf("Total: R$ %.2lf\n",price);
    }
    else if(X==2)
    {
        price = Y*4.50;
        printf("Total: R$ %.2lf\n",price);
    }
    else if(X==3)
    {
        price = Y*5.00;
        printf("Total: R$ %.2lf\n",price);
    }
    else if(X==4)
    {
        price = Y*2.00;
        printf("Total: R$ %.2lf\n",price);
    }
    else if(X==5)
    {
        price = Y*1.50;
        printf("Total: R$ %.2lf\n",price);
    }



    return 0;


}
