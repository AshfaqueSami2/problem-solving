#include<stdio.h>
int main()
{

    int num,sum=0,i,count=0;

     for(i=1;i<=5;i++){
        scanf("%d",&num);
        if(num % 2 == 0)
        {
            count++;
        }
     }
        printf("%d valores pares\n",count);





    return 0;

}

