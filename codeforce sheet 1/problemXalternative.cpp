#include<stdio.h>

int main()
{
    int L1, R1, L2, R2;

    scanf("%d %d %d %d", &L1, &R1, &L2, &R2);

    if ( (L2 > R1 || R2 < L1) || (R1<L2 && L1<R2) )
    {
        printf("-1\n");
    }
    else
    {
        if (L2 == L1 || L2 <= L1)
        {
            printf("%d", L1);
        }
        else
        {
            printf("%d", L2);
        }
        if (R2 <= R1)
        {
            printf(" %d", R2);
        }
        else
        {
            printf(" %d", R1);
        }
    }

    return 0;
}
