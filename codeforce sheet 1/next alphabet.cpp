#include <stdio.h>
int main() {
    char x;
    scanf("%c",&x);
    char y;
    if (x == 'z') {
        y = 'a';
    } else {
        y = x+1;
    }
    printf("%c\n",y);
    return 0;
}