#include<stdio.h>
int main()
{
   int X,N,i,in=0,out=0;

    scanf("%d",&X);
    for(i=0;i<X;i++)
    {
        scanf("%d",&N);
        if(N>=10 && N<=20){
            in++;
        }else{
            out++;
        }

    }
    printf("%d in\n",in);
    printf("%d out\n",out);


    return 0;
}
