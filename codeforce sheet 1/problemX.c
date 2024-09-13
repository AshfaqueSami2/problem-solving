#include <stdio.h>

int main() {
    int l1, r1, l2, r2;
    int max, min;
    scanf("%d %d %d %d", &l1, &r1, &l2, &r2);
    if (l1 > l2) {
        max = l1;
    } else {
        max = l2;
    }
    if (r1 < r2) {
        min = r1;
    } else {
        min = r2;
    }

    if (max > min) {
        printf("-1\n");
    } else {
        printf("%d %d\n", max, min);
    }

    return 0;
}
