#include <stdio.h>
#include <string.h>

int main() {
    char s1[105], s2[105];
    scanf("%s%s", s1, s2);

    int length1 = strlen(s1);
    int length2 = strlen(s2);
    int count = 0;

    if (length1 != length2) 
    {
        printf("NO\n");
    }
    else {
        for (int i = 0; i < length1; i++) 
        {
            if (s1[i] != s2[length1 - i - 1]) 
            {
                printf("NO\n");
                return 0;
            }
        }

        printf("YES\n");
    }

    return 0;
}
