#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
int main()
{
    char word[110];
    int uletter = 0, lletter = 0;
    scanf("%s",word);
    for (int i = 0; word[i] != '\0'; i++)
    {
        if (word[i] >= 'A' && word[i] <= 'Z')
        {
            uletter++;
        }
        else if (word[i] >= 'a' && word[i] <= 'z')
        {
            lletter++;
        }
    }

    if (uletter > lletter)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = toupper(word[i]);
        }
    }
    else if (lletter > uletter)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = tolower(word[i]);
        }
    }
    else if (lletter == uletter)
    {
        for (int i = 0; word[i] != '\0'; i++)
        {
            word[i] = tolower(word[i]);
        }
    }

    printf("%s\n", word);

    return 0;
}
