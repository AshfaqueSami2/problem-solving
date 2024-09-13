//not submitted

#include<stdio.h>
int main()
{
    int n, q, arr[100010], i, l, r, j;
    long long int psum[100010], sum;
    scanf("%d%d", &n, &q);
    for(i=1; i<=n; i++) // O(n)
        scanf("%d", &arr[i]);

    // prefix Sum
    psum[0]=0;
    for(i=1; i<=n; i++)
    {
        psum[i] = psum[i-1] + arr[i];
    }

    for(i=0; i<q; i++) // O(q)
    {
        scanf("%d%d", &l, &r);
        // Prefix Sum / Cumulative Sum

        sum = psum[r] - psum[l-1];

        printf("%lld\n", sum);
    }

    return 0;
}
