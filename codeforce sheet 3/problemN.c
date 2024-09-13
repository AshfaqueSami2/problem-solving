//WA 9
#include<stdio.h>
#include<string.h>
int main()
{
    int i,x,y;
    char c[100];
    scanf("%d%d%s",&x,&y,&c);
    if(strlen(c) != x+y+1 || c[x] != '-')
    {
        printf("No\n");
        return 0;
    }
    int f=1;
    for(i=0; i<x+y+1;i++)
    {
       if(i == x)
        {
            if(c[i] != '-')
            {
                f = 0;
                break;
            }
        }
        else if(c[i] < '0' || c[i] > '9')
        {
            f = 0;
            break;
        }
    }
    if(f==1)
        printf("Yes\n");
    else
        printf("No\n");

        return 0;
}
