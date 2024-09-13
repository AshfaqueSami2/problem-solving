//incomplete
#include<stdio.h>
int main()
{
    int a;
    int arr[1020];
     int max1 = -1000000 , max2 = -1000000;
    scanf("%d",&a);
    for(int i=0;i<a;i++)
    {
        int x;
        scanf("%d",&x);
        for(int j=0;j<x;j++)
        {
            scanf("%d",&arr[j]);
        }
         for(int j=0;j<x;j++)
        {
          if(arr[j] > max1)
            {
                max1 = arr[j];
            }
        }
        for(int j=0;j<x;j++)
        {
          if(arr[j] > max2 && arr[j]!= max1  )
            {
                max2 = arr[j];
            }
        }
    }


printf("d",max1+max2);


    return 0;
}
