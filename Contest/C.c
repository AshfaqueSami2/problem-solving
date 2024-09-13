#include <stdio.h>
#include <string.h>
int main() 
{
    char input1[101],input2[101];
    scanf("%s",input1);
    scanf("%s",input2);
    int length = strlen(input1);
    int flag = 0;
    for (int i = 0; i < length; i++) 
    {
        if (input1[i] != input2[length - 1 - i]) 
        {
            flag = 1;
            break;
        }
    }
    if (flag == 1) 
    {
        printf("NO\n");
    } else {
        printf("YES\n");
    }

    
}
