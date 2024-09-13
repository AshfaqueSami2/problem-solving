#include <stdio.h>
#include <string.h>
int main()
{
    int n,i,length;
    scanf("%d",&n);
    char word[110];
    for(i=0;i<n;i++) {
        scanf("%s",&word);
        length=strlen(word);
        if (length<=10) {
            printf("%s\n",word);
        } else {
            printf("%c%d%c\n",word[0],(length-2),word[length-1]);
        }
    }
    return 0;
}

