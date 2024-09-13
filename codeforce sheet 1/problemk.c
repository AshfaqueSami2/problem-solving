
#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>=b && b>=c)
    {
      printf("%d %d\n",c,a);
    }
    else if(a>=c && c>=b)
    {
        printf("%d %d\n",b,a);
    }

    else if(b>=a && a>=c)
    {
        printf("%d %d\n",c,b);
    }

    else if(b>=c && c>=a)
    {
        printf("%d %d\n",a,b);
    }


    else if(c>=a && a>=b)
    {
        printf("%d %d\n",b,c);
    }

    else if(c>=b && b>=a)
    {
        printf("%d %d\n",a,c);

    }

    return 0;
}



