#include<stdio.h>
#include<math.h>
int main()
{
    double A,B,C;
    double R1,R2;
    scanf("%lf%lf%lf",&A,&B,&C);
    R1=(-B+sqrt(B*B-4*A*C))/(2*A);
    R2=(-B-sqrt(B*B-4*A*C))/(2*A);


    if((B*B-4*A*C)<0||2*A==0)
    {
        printf("Impossivel calcular\n");
    }
    else
    {
        printf("R1 = %0.5f\n",R1);
        printf("R2 = %0.5f\n",R2);
    }


    return 0;
}
