#include <stdio.h>

int main() {
    int n, i, j, f;
    scanf("%d", &n);
    for (i = 2; i <= n; i++) //i = 2 bcz 1 is not prime + all ans will be 1
    {
        f = 0;
        for (j = 2; j < i; j++) {
            if (i % j == 0) {
                f = 1;
            }
        }
        if (f == 0) {
            printf("%d ", i);
        }
    }
    return 0;
}
