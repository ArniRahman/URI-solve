#include<stdio.h>
int main()
{
    int A,B,C,D;
    int X,Y;
    int DIFERENCA;

    scanf("%d%d%d%d",&A,&B,&C,&D);

    X=A*B;
    Y=C*D;

    DIFERENCA=X-Y;

    printf("DIFERENCA = %d\n",DIFERENCA);
    return 0;


}
