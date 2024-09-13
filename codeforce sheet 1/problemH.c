#include <stdio.h>
#include<math.h>
int main() {
    int a,b,floor_1,ceil_1,round_1;

    scanf("%d%d",&a,&b);
    floor_1=floor((double)a/b);
    ceil_1=ceil((double)a/b);
    round_1=round((double)a/b);
    printf("floor %d / %d = %d\n",a,b,floor_1);
    printf("ceil %d / %d = %d\n",a,b,ceil_1);
    printf("round %d / %d = %d\n",a,b,round_1);
    return 0;
}

