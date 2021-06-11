#include<stdio.h>
int main()
{
    double R;
    double volume;
    scanf("%lf",&R);

    volume=(4.0/3)*3.14159*R*R*R;
    printf("VOLUME = %0.3f\n",volume);
    return 0;
}
