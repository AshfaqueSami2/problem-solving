#include <stdio.h>
int main() {
    int x[1000],n,i,min=0,max=0,t;
    scanf("%d",&n);

    for (i=0; i<n;i++) {
        scanf("%d",&x[i]);
    }
    for (i=1; i<n;i++) {
        if (x[i]<x[min])
        {
            min = i;
        }
        if (x[i] >x[max])
        {
            max = i;
        }
    }
    t = x[min];
    x[min] = x[max];
    x[max] = t;

    for (i=0; i<n;i++) {
        printf("%d ",x[i]);
    }

    return 0;
}
