#include<stdio.h>
int main()
{
    int X;
    double Y;
    double consumption;

    scanf("%d",&X);
    scanf("%lf",&Y);

    consumption=X/Y;

    printf("%0.3f km/l\n",consumption);
    return 0;
}
