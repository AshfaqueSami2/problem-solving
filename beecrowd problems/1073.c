#include<stdio.h>
int main()
{
    int i=2,N;
    scanf("%d",&N);
    while(i<=N)
    {
        if(i%2==0)
        {

            printf("%d^2 = %d\n",i,i*i);
        }
        i++;

    }


    return 0;
}
