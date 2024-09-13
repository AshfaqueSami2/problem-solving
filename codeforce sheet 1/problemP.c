#include<stdio.h>
 int main()
 {
     int a;
     scanf("%d",&a);
     if((a/1000)%2==0)//4234/1000=4 4%2==0 == even or odd
     {
         printf("EVEN\n");
     }
     else
     {
        printf("ODD\n");
     }


     return 0;
 }
