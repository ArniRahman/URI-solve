#include<stdio.h>
int main()
{
    double N1,N2,N3,N4;
    double N5;
    double average;
    double media;
    scanf("%lf%lf%lf%lf",&N1,&N2,&N3,&N4);
    scanf("%lf",&N5);

    average=(2*N1+3*N2+4*N3+1*N4)/10;
    printf("Media: %0.1f\n",average);

    if(average==7.0||average>7.0)
        printf("Aluno aprovado.\n");
    else if(average<5.0)
        printf("Aluno reprovado.\n");
    else
    {
        printf("Aluno em exame.\n");
        printf("Nota do exame: %0.1f\n",N5);
        if(N5==5.0||N5>5.0)
            printf("Aluno aprovado.\n");
        else
            printf("Aluno reprovado.\n");

        media=(average+N5)/2;
        printf("Media final: %0.1f\n",media);
    }
    return 0;


}
