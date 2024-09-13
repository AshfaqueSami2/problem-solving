#include <stdio.h>
void inArray(int arr[], int size) //input process korbe
{
    for (int i = 0; i < size; i++) 
    {
        scanf("%d",&arr[i]);
    }
}
int sumOdd(int arr[],int size)  // summ gula odd korbe
{
    int sum = 0;
    for (int i = 0; i < size; i++) 
    {
        if (arr[i] % 2 != 0) 
        {
            sum += arr[i];
        }
    }
    return sum;
}
int sumall(int arr[],int size)  // summ gula odd korbe
{
    int sum1 = 0;
    for (int i = 0; i < size; i++) 
    {
            sum1 += arr[i];
    }
    return sum1;
}
int main() 
{
    int size;
    scanf("%d",&size);
    int arr[size];
    inArray(arr,size);
    int oddSum = sumOdd(arr, size);
    printf("%d\n",oddSum);
    int allsum = sumall(arr,size);
    printf("%d\n",allsum);
}
