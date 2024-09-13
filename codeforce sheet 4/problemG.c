#include <stdio.h>
#include <string.h>
int main()
{
    char c[100010];
    scanf("%s",c);
    int x = strlen(c);
    for(int i=0; i<x;i++)
        {
        if (c[i] == ',')
        {
            c[i] = ' ';
        } else if(c[i] >= 'a' && c[i] <= 'z')
        {
            c[i] -= 32;
        } else if(c[i] >= 'A' && c[i] <= 'Z')
        {
            c[i] += 32;
        }
        printf("%c",c[i]);
    }
    return 0;
}
