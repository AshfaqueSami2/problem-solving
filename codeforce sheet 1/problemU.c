#include<stdio.h>
int main()
{
    float n;
    int integer;
    scanf("%f",&n);
    integer = (int)n;
    if(n==integer)
    {
        printf("int %d",integer);
    }
    else
    {
        printf("float %d %.3f",integer,n-integer);
    }

    return 0;
}

