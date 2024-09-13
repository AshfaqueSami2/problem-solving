#include <stdio.h>

int main() {
    int num,i,f=0,g=0;
    scanf("%d", &num);

    if (num == 1)
        {
        printf("NO\n");
        }

    for (i = 2; i < num; i++) {
        if (num % i == 0) {
            f=1;
        }
    }
if(f==1)
{
    printf("NO\n");
}
else if(f==0)
{
printf("YES\n");
}



    return 0;
}

