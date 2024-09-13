#include <stdio.h>

int main()
{
    int i,z,x,y,sum=0;
    scanf("%d%d", &x, &y);
    if (x>y)
    {
        z = x;
        x = y;
        y = z;
    }

    for (i=x;i<=y;i++)
    {
        if (i%13!=0)
        {
            sum +=i;
        }
    }

    printf("%d\n",sum);
    return 0;
}
