#include <stdio.h>

int main() {
    float i, j;

    for(i = 0; i <= 2; i += 0.2) {
        for(j = 1; j <= 3; j++) {
            if (i == 2 && j == 1) {
                printf("I=%d J=%.0f\n",i,i + j);
            } else {
                printf("I=%.1f J=%.1f\n",i,i + j);
            }
        }
    }
    return 0;
}

