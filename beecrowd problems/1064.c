#include <stdio.h>

int main()
{
    double num,sum=0,avg;
    int i,count=0;
    i=1;

    while(i<=6){
        scanf("%lf",&num);
        if(num>0){
          sum = sum + num;
          count++;
        }
        i++;
    }
     avg = sum/count;
    printf("%d valores positivos\n",count);
    printf("%.1lf\n",avg);
    return 0;
}
