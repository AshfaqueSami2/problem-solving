#include <stdio.h>
int main()
{
    int sh,eh,sm,em,d1,d2,a,b,c,d,st,et;
    scanf("%d %d %d %d", &sh, &sm, &eh, &em);

    st = sh*60+sm;
    et = eh*60+em;


    if(st<et)
    {
        d1 = et-st;
        a = d1/60;
        b = d1%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",a,b);
    }
    if(st>et)
    {
        d2 = et - st + 1440;
        c = d2/60;
        d = d2%60;
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c,d);
    }
    if(st == et)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }
    return 0;
}

