#include <stdio.h>

int main() {
    int i, count = 0, theword = 0;
    char arr[1000000];
    scanf("%[^\n]", arr);
    for (i = 0; arr[i] != '\0'; i++) {
        if ((arr[i] >= 'a' && arr[i] <= 'z') || (arr[i] >= 'A' && arr[i] <= 'Z')) {
            theword = 1;
        }
        else
        {
            if (theword > 0){
                count++;
            theword = 0;
        }
    }
    }
    if (theword > 0) {
        count++;
    }
    printf("%d\n", count);
    return 0;
}
