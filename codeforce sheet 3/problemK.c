/*
#include <stdio.h>
int main() {
    int i,n,sum = 0;
    scanf("%d", &n);
    char x[n];
    scanf("%s",&x);
    for (i=0;i<n;i++) {
        sum += x[i];
    }
    printf("%d\n",sum);

    return 0;
}
*/

#include <stdio.h>
int main() {
    int i,n,sum = 0;
    scanf("%d", &n);
    char x[n];
    for (i=0;i<n;i++) {
        scanf("%c",&x[i]);
        sum += x[i] - '0';
    }
    printf("%d\n",sum);

    return 0;
}

