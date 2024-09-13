#include <stdio.h>
#include <string.h>

int main() {
    char sen[101][101]; 
    int maxlen = 0; 
    int i, j;
    for (i = 0; gets(sen[i]); i++) 
    {
        int len = strlen(sen[i]);
        if (len > maxlen) 
        {
            maxlen = len;
        }
    }
    int count = i;
    for (j = 0; j < maxlen; j++) {
        for (i = count - 1; i >= 0; i--) 
        {
            if (j < strlen(sen[i])) 
            {
                printf("%c", sen[i][j]);
            } 
            else 
        {
                printf(" ");   
        }
     // cant do this in next line..
    }
    }
    return 0;
}
