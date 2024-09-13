#include<stdio.h>
int main()
{
    int st,et;
    scanf("%d%d",&st,&et);

    if(st==et){
        printf("O JOGO DUROU 24 HORA(S)\n");
    }
    else if(st>et){
        printf("O JOGO DUROU %d HORA(S)\n",24-st+et);
    }
    else if(et>st){
        printf("O JOGO DUROU %d HORA(S)\n",et-st);
    }





    return 0;
}
