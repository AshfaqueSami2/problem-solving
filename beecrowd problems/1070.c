
#include <stdio.h>

int main() {
    int x;
    scanf("%d", &x);

    if (x % 2 == 0) {
        x++;
    }

    printf("%d\n", x);
    printf("%d\n", x + 2);
    printf("%d\n", x + 4);
    printf("%d\n", x + 6);
    printf("%d\n", x + 8);
    printf("%d\n", x + 10);

    return 0;
}

