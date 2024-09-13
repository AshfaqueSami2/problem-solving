#include<stdio.h>
#include<math.h>
int main ()
{
    int t,n;
    scanf("%d",&t);
    for(int i=1;i<=t;i++)
    {
        scanf("%d",&n);

    int x=n;
    int count = 0;
    while(x!=0)
    {
        int bin = x%2;
        if(bin == 1)
            count++;
        x/=2;
    }
    int sum = 0;
    for(int j=0;j<count;j++)
    {
        sum+= pow(2,j);

    }
     printf("%d\n",sum);
    }
    return 0;
}
