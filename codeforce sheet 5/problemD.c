#include <stdio.h>
int foundPrime(int num) 
{
    if (num == 1) 
    {
        return 0;
    }

    for (int i = 2; i < num; i++) 
    {
        if (num % i == 0) 
        {
            return 0;
    }
}
return 1;
}

int main() {
    int n,x;
    scanf("%d", &n);
    int i ;
    for(i=0;i<n;i++)
    {
        scanf("%d",&x);
        int found = foundPrime(x);
        if(x == 2)
        {
            printf("YES\n");
            continue;
        }
    if (found == 1) 
    {
        printf("YES\n");
    } 
    else 
    {
        printf("NO\n");
    }
    }
   
}
