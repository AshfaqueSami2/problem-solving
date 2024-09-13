#include<stdio.h>
#include<math.h>
#include<string.h>
int  main ()
{
    int x,y,a,b,c,d;
    int round = 0;
    scanf("%d%d",&x,&y);
    if( (x==y) || (x>y) )
    {
        printf("1\n");
    }
    else if (x<y)
    {
        int round = 0;
        a = x;
        b = y;
        while (1)
        {
           c = 3*a; //12
           d = 2*b; //14


        a = c;
        b =d;
         round++;
        ///printf("%d %d\n",a,b);
        if ( c > d)
        {
            break;
        }


    }
    printf("%d",round);
    }



    return 0;

}

