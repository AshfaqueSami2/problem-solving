//error 3
#include <stdio.h>
int main() {
    int x,d1,d2;
    scanf("%d",&x);
    d1= x / 10;
    d2= x % 10;
    if (d1 != 0 && d2 != 0 && (d1 % d2 == 0 || d2 % d1 == 0)) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

