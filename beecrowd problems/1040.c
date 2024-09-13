#include<stdio.h>
int main()
{
    double N1,N2,N3,N4,x,media,avg;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);

    N1=N1*2;
    N2=N2*3;
    N3=N3*4;
    N4=N4*1;

    media=(N1+N2+N3+N4)/10.00;

    printf("Media: %.1lf\n",media);

    if(media>=7){
        printf("Aluno aprovado.\n");
    }
    else if(media<5){
        printf("Aluno reprovado.\n");
    }
    else {
        printf("Aluno em exame.\n");
        scanf("%lf",&x);
        printf("Nota do exame: %.1lf\n",x);

        avg = (media+x)/2;

   if ( avg >= 5.0 ){
            printf("Aluno aprovado.\n");
        }
        else {
            printf("Aluno reprovado.\n");
        }

        printf("Media final: %.1lf\n",avg);
    }

    return 0;

}
