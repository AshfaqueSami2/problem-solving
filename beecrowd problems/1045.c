#include<stdio.h>
int main()
{
    double A,B,C,l,m,n;
    scanf("%lf%lf%lf",&A,&B,&C);

    if(B>A){
        l = A;
        A = B;
        B = l;
    }
     if(C>A){
        m = A;
        A = C;
        C = m;
    }
     if(C>B){
        n = B;
        B = C;
        C = n;

    }

    if(A>=B+C){
        printf("NAO FORMA TRIANGULO\n");
    }
    else {
            if(A*A == B*B+C*C){
        printf("TRIANGULO RETANGULO\n");
    }
            if(A*A>B*B+C*C){
        printf("TRIANGULO OBTUSANGULO\n");
    }
            if(A*A<B*B+C*C){
        printf("TRIANGULO ACUTANGULO\n");
    }
            if(A == B && A == C && B==C){
            printf("TRIANGULO EQUILATERO\n");}
            if((A == B && A != C)  || (A == C && A != B) || (B == C && B != A)){
            printf("TRIANGULO ISOSCELES\n");
    }
    }
    return 0;
}

