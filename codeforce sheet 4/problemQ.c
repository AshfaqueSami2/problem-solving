#include <stdio.h>
#include <string.h>
int main()
{
    char arr[1000000];
    int i,pos,j;
    gets(arr);
    int x = strlen(arr);
    for(i=0; i<=x; i++)
    {
        if(arr[i]==' '|| i==x)
        {
            for(j=(i-1);; j--)
            {
                if(j<0||arr[j]==' ')
                {
                    break;
                }
                else
                {
                    printf("%c",arr[j]);
                }
            }
            if(i==x)
            {
                return 0;
            }
            else
            {
                printf(" ");
            }

        }
    }
    return 0;
}
