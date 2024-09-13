#include<stdio.h>
#include<string.h>
int main ()
{
    char x[1010];
    scanf("%s",x);

        if(x[0]>='a' && x[0]<='z')
        {
            x[0]-=32;
        }

    printf("%s",x);


    return 0;
}
