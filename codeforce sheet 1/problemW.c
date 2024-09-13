#include <stdio.h>
int main()
{
    long long a, b, c;
    char s, t;

    scanf("%lld %c %lld %c %lld", &a, &s, &b, &t, &c);

    if (s == '+')
    {
        if (a + b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld\n", a + b);
        }
    }
    else if (s == '-')
    {
        if (a - b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld\n", a - b);
        }
    }
    else if (s == '*')
    {
        if (a * b == c)
        {
            printf("Yes\n");
        }
        else
        {
            printf("%lld\n", a * b);
        }
    }

    return 0;
}
