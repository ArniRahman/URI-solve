#include<stdio.h>
int main()
{
    double a,b,c,A,B,C;
    scanf("%lf%lf%lf",&a,&b,&c);

    A = a,B = b,C = c;

    if(b>A){
      A = b,B = a,C = c;
    }

    if(c>A){
        A = c,B = b,C = a;
    }


        if(A>=(B+C))
            printf("NAO FORMA TRIANGULO\n");
        else
        {
            if(A*A==(B*B+C*C))
                printf("TRIANGULO RETANGULO\n");
            if(A*A>(B*B+C*C))
                printf("TRIANGULO OBTUSANGULO\n");
            if(A*A<(B*B+C*C))
                printf("TRIANGULO ACUTANGULO\n");
            if(A==B&&B==C)
                printf("TRIANGULO EQUILATERO\n");
            if(A==B&&A!=C)
                printf("TRIANGULO ISOSCELES\n");
            if(A==C&&A!=B)
                printf("TRIANGULO ISOSCELES\n");
            if(B==C&&B!=A)
                printf("TRIANGULO ISOSCELES\n");


        }
return 0;
}
