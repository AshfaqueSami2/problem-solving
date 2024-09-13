#include <stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    char s[n];
    for(int i=0; i<n; i++)
    {
        scanf(" %c", &s[i]);
    }
    char temp;
    for(int i=0; i < n-1; i++)
    {
        for(int j= 0; j < n-1; j++)
        {
            if(s[j] > s[j + 1])
            {
                temp = s[j];
                s[j] = s[j + 1];
                s[j + 1] = temp;
            }
        }
    }

    for(int i=0; i<n; i++)
    {
        printf("%c",s[i]);
    }

    return 0;
}

