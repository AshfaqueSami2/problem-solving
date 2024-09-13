#include <stdio.h>
int main() 
{
    int t,count1 = 0,count2 = 0;
    char x;
    scanf("%d", &t);
    while (t--) 
    {
        scanf(" %c", &x);
        if (x == 'D') 
        {
            count1++;
        }
        else if (x == 'A') 
        {
            count2++;
        }
    }
    if (count1 > count2) 
    {
        printf("Danik\n");
    } 
    else if (count1 < count2) 
    {
        printf("Anton\n");
    } 
    else 
    {
        printf("Friendship\n");
    }

    
}
