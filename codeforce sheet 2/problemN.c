#include <stdio.h>
int main() {
    char ch;
    int n,x;
    scanf("%c%d",&ch,&n);
    for (int i=1;i<=n;i++) {
        scanf("%d",&x);
        for (int j=1;j<=x;j++) {
            printf("%c",ch);
        }
        printf("\n");
    }
    return 0;
}

