#include<stdio.h>
int main()
{
   int i,n,x,y,z,count=0;
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
       scanf("%d%d%d",&x,&y,&z);
     if(x+y+z>=2)
     {
        count++;
     }
   }
   printf("%d",count);
    return 0;
}
