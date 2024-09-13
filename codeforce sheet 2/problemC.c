#include<stdio.h>
int main()
{
    int x,y,i,a=0,b=0,c=0,d=0;
    scanf("%d",&x);
    for(i=1;i<=x;i++)
    {
        scanf("%d",&y);
        if(y%2==0 || y==0)
        {
            a++;
        }
        if(y%2!=0)
        {
            b++;
        }
        if(y>0)
        {
            c++;
        }
        if(y<0)
        {
            d++;
        }

    }
    printf("Even: %d\n",a);
    printf("Odd: %d\n",b);
    printf("Positive: %d\n",c);
    printf("Negative: %d\n",d);


    return 0;
}
