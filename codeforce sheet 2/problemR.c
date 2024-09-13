#include <stdio.h>

int main() {
    int n,m,sum,i,t;
    while (1) {
        scanf("%d%d",&n,&m);
        if (n<=0 || m<=0)
        {
            break;
        }
        if(n>m)
        {
            t=n;
            n=m;
            m=t;
        }
sum=0;
        for (i=n;i<=m;i++)
        {
            printf("%d ",i);
            sum += i;
        }
        printf(" sum =%d\n", sum);
    }
    return 0;
}
