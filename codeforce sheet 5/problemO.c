#include <stdio.h>
int Maximum(int arr[], int n) 
{
    int max = arr[0];
    for (int i = 1;i<n;i++) 
    {
        if (arr[i] > max) 
        {
            max = arr[i];
        }
    }
    return max;
}
int Minimum(int arr[],int n) 
{
    int min = arr[0];
    for (int i = 1; i<n;i++) 
    {
        if (arr[i] < min) 
        {
            min = arr[i];
        }
    }
    return min;
}
int CountDivisors(int num) 
{
    int divisor = 0;
    for (int i = 1; i<=num;i++) 
    {
        if (num % i == 0) 
        {
            divisor++;
        }
    }
    return divisor;
}

int main() 
{
    int x;
    scanf("%d", &x);
    int arr[x];
    for (int i = 0;i<x;i++) 
    {
        scanf("%d", &arr[i]);
    }
    
    int max = Maximum(arr,x);
    int min = Minimum(arr,x);
    int primeCount = 0;
    int palindromeCount = 0;
    int maxDivisorCount = 0;
    int numberWithMaxDivisors = 0;

    for (int i = 0; i < x; i++) 
    {
        if (isPrime(arr[i])) 
        {
            primeCount++;
        }
        if (isPalindrome(arr[i])) 
        {
            palindromeCount++;
        }
        int divisors = countDivisors(arr[i]);
        if (divisors > maxDivisorCount) 
        {
            maxDivisorCount = divisors;
            numberWithMaxDivisors = arr[i];
        }
    }
    
    printf("The maximum number : %d\n", max);
    printf("The minimum number : %d\n", min);
    printf("The number of prime numbers : %d\n", primeCount);
    printf("The number of palindrome numbers : %d\n", palindromeCount);
    printf("The number that has the maximum number of divisors : %d\n", numberWithMaxDivisors);
    
    return 0;
}
