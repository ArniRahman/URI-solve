#include<stdio.h>
#include<math.h>

int main()
{
    double total;
    int a,b,c,d,e,f,g,h,i,j,k,l,m;
    scanf("%lf",&total);

    printf("NOTAS:\n");

    a=total*100;
    b=a/10000;
    c=a%10000;
    d=c/5000;
    e=c%5000;
    f=e/2000;
    g=e%2000;
    h=g/1000;
    i=g%1000;
    j=i/500;
    k=i%500;
    l=k/200;
    m=k%200;
    printf("%d nota(s) de R$ 100.00\n",b);
    printf("%d nota(s) de R$ 50.00\n",d);
    printf("%d nota(s) de R$ 20.00\n",f);
    printf("%d nota(s) de R$ 10.00\n",h);
    printf("%d nota(s) de R$ 5.00\n",j);
    printf("%d nota(s) de R$ 2.00\n",l);


    printf("MOEDAS:\n");

    int A,B,C,D,E,F,G,H,I,J,K,L;

    A=m/100;
    B=m%100;
    C=B/50;
    D=B%50;
    E=D/25;
    F=D%25;
    G=F/10;
    H=F%10;
    I=H/5;
    J=H%5;
    K=J;


    printf("%d moeda(s) de R$ 1.00\n",A);
    printf("%d moeda(s) de R$ 0.50\n",C);
    printf("%d moeda(s) de R$ 0.25\n",E);
    printf("%d moeda(s) de R$ 0.10\n",G);
    printf("%d moeda(s) de R$ 0.05\n",I);
    printf("%d moeda(s) de R$ 0.01\n",K);



    return 0;
}
