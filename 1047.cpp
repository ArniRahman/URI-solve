#include<stdio.h>
int main()
{
    int starthour,startminute,endhour,endminute;
    scanf("%d%d%d%d",&starthour,&startminute,&endhour,&endminute);
    int time1,time2,time3;

    int starttime=(starthour*60)+startminute;
    int endtime=(endhour*60)+endminute;


    if(starttime==endtime)
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");

    else if(endtime>starttime)
    {
        time1=endtime-starttime;
        time2=time1/60;
        time3=time1%60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",time2,time3);

    }
    else
    {
        time1=1440-starttime+endtime;
        time2=time1/60;
        time3=time1%60;

        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",time2,time3);

    }
    return 0;
}

