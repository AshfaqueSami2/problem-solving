#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main() 
{
    char input[101];
    scanf("%s",input);
    for (int i = 0; i < strlen(input); i++) 
    {
        char low = tolower(input[i]);
        if (low == 'a' || low == 'o' || low == 'y' || low == 'e' || low == 'u' || low == 'i') 
        {
            continue;
        }
        printf(".%c", low);
    }

   
}
