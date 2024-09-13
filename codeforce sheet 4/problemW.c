#include <stdio.h>
#include <string.h>
int main()
{
    char key[] = "PgEfTYaWGHjDAmxQqFLRpCJBownyUKZXkbvzIdshurMilNSVOtec#@_!=.+-*/";
    char orginal[] = "abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789";
    int lenkey = strlen(key);
    int lenorg = strlen(orginal);

    int a, index;
    char x[100010];

    scanf("%d", &a);
    scanf("%s",x);
    int inputlen = strlen(x);
    if(a==1)
    {
        for (int i = 0; i < inputlen; i++)
        {
            for (int j = 0; j < lenorg; j++)
            {
                if (x[i] == orginal[j])
                {
                    index = j;
                    break;
                }
            }
            printf("%c", key[index]);
        }
    }

    if(a== 2)
    {
        for (int i = 0; i < inputlen; i++)
        {
            for (int j = 0; j < lenkey; j++)
            {
                if (x[i] == key[j])
                {
                    index = j;
                    break;
                }
            }
            printf("%c", orginal[index]);
        }
    }

    return 0;
}
