#include<stdio.h>
int main()
{
    int a,b;
    double c;

    int p,q;
    double r;

    double total;

    scanf("%d%d",&a,&b);
    scanf("%lf",&c);

    scanf("%d%d",&p,&q);
    scanf("%lf",&r);

    total=b*c+q*r;


    printf("VALOR A PAGAR: R$ %0.2f\n",total);
    return 0;
}
