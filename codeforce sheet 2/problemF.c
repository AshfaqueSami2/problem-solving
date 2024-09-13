#include<stdio.h>
int main()
{
    int i,a,b;
    scanf("%d",&a);
    for(i=1;i<=12;i++)
    {
        b = a*i;
        printf("%d * %d = %d\n",a,i,b);
    }
    return 0;
}
