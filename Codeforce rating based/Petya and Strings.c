#include <string.h>
#include <stdio.h>

int main() {
    char s1[110], s2[110];
    scanf("%s%s", s1, s2);
    int x = strcasecmp(s1, s2);

    if (x < 0) {
        printf("-1\n");
    }
    else if (x > 0) {
        printf("1\n");
    }
    else {
        printf("0\n");
    }

    return 0;
}
