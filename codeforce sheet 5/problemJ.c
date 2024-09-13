#include <stdio.h>
double avgg(int n,double arr[])
{
    double x,sum = 0;
    for(int i=0;i<n;i++)
    {
        sum += arr[i];
    }
    x = (double)sum/n;
    return x;
}
int main()
{
    int n;
    scanf("%d",&n);
    double arr[n];
    for(int i=0;i<n;i++)
    {
        scanf("%lf",&arr[i]);
    }
    double avg = avgg(n,arr);
    printf("%.6lf",avg);
    return 0;
}

