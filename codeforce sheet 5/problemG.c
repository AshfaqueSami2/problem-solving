#include <stdio.h>
void minmax(int array[],int x)
{
    int min = array[0],max = array[0];
    for(int i=1 ;i<x;i++)
    {
       if (array[i] < min) {
            min = array[i];
        }
        if (array[i] > max) {
            max = array[i];
        }
    }
    printf("%d %d",min,max);

}
int main()
{
   int x;
   scanf("%d",&x);
   int array[x];
   for(int i=0;i<x;i++)
   {
       scanf("%d",&array[i]);
   }

   minmax(array,x);

    return 0;
}

