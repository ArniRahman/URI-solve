#include<stdio.h>
int main()
{
    int start,end;
    scanf("%d%d",&start,&end);
    int hours;

    if(start==end)
        printf("O JOGO DUROU 24 HORA(S)\n");
    else if(start>end)
    {
        hours=(24-start)+end;
        printf("O JOGO DUROU %d HORA(S)\n",hours);
    }

    else
    {
        hours=end-start;
        printf("O JOGO DUROU %d HORA(S)\n",hours);
    }

    return 0;
}
