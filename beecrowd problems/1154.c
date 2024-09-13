#include<stdio.h>
int main()
{
    int a,count=0;
    double sum=0,avg;
    while(1)
    {
        scanf("%d",&a);
        if (a>0)
        {
            count++;
            sum = sum+a;
            avg = sum/count;

        }
        else if(a<0)
        {
            break;
        }





    }
printf("%.2lf\n",avg);
    return 0;
}
