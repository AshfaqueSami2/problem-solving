#include <stdio.h>
int main()
{
    int num, h=0,pos=0,i;

    for (i=1;i<=100;i++) {
        scanf("%d",&num);

        if (num >h) {
            h=num;
            pos=i;
        }
    }

    printf("%d\n%d\n",h,pos);

    return 0;
}

