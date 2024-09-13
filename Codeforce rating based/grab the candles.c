#include <stdio.h>
int main() {
    int t,n,a,mihai_c,bianca_c;
    scanf("%d",&t);
    for (int i=1; i <=t; i++) {
        scanf("%d", &n);
        mihai_c = 0;
        bianca_c = 0;
        for (int j = 1; j <= n; j++) {
            scanf("%d", &a);
            if (a % 2 == 0) {
                mihai_c += a;
            } else {
                bianca_c += a;
            }
        }
        if (mihai_c > bianca_c) {
            printf("YES\n");
        } else {
            printf("NO\n");
        }
    }
    return 0;
}
