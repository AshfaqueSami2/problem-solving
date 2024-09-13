#include<stdio.h>
int main()
{
    int i,y[1010],x;
    scanf("%d",&x);
    for(i=0;i<x;i++)
    {
        scanf("%d",&y[i]);
    }
    int min=0;
    min = y[0];
    for(i=1;i<x;i++)
    {
        if(y[i]<min)
        {
            min=y[i];
        }
    }
    int count=0;
    for(i=0;i<x;i++)
    {
        if(y[i]==min)
        {
            count++;
        }
    }
    if(count%2==1)
    {
        printf("Lucky\n");
    }
    else{printf("Unlucky\n");}


    return 0;
}
