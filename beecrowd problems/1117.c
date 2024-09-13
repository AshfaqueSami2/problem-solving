#include<stdio.h>
int main()
{
    double x,avg,sum=0,store=0;
    while (1)
    {
        scanf("%lf",&x);

        if(x>=0 && x<=10)
        {

            store++;
            sum = sum+x;
            if(store==2)
        {
            break;
        }

        }

        else
        {
            printf("nota invalida\n");
        }



    }
    avg = sum/2.00;
    printf("media = %.2lf\n",avg);


    return 0;
}
