#include<stdio.h>
int main()
{
    int total;
    int a,b,c,d,e,f,g,h,N;
    N=0<N<1000000;
    scanf("%d",&total);


    printf("%d\n",total);

    a=total/100;
    b=total%100;
    printf("%d nota(s) de R$ 100,00\n",a);
    a=b/50;
    c=b%50;
    printf("%d nota(s) de R$ 50,00\n",a);
    a=c/20;
    d=c%20;
    printf("%d nota(s) de R$ 20,00\n",a);
    a=d/10;
    e=d%10;
    printf("%d nota(s) de R$ 10,00\n",a);
    a=e/5;
    f=e%5;
    printf("%d nota(s) de R$ 5,00\n",a);
    a=f/2;
    g=f%2;
    printf("%d nota(s) de R$ 2,00\n",a);
    a=g/1;
    h=g%1;
    printf("%d nota(s) de R$ 1,00\n",a);

    return 0;
}
