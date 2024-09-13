//error 3
#include <stdio.h>
int main() {
    long long a,b,c,d;
    scanf("%lld%lld%lld%lld",&a,&b,&c,&d);
    if ((a+b+c==d) || (a-b+c==d) || (a+b-c==d) || (a*b*c==d) || ((a+b)*c==d) || (a*(b+c)==d) || (a-b-c==d) || ((a-b)*c) || (a*(b-c))) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }
    return 0;
}

