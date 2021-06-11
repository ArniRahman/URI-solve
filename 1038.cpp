#include<stdio.h>
int main()
{
    int a;
    int quantity;
    double total;

    scanf("%d%d",&a,&quantity);


    if(a==1)
    {
        total=quantity*4.00;
        printf("Total: R$ %0.2f\n",total);
    }

    else if(a==2)
    {
        total=quantity*4.50;
        printf("Total: R$ %0.2f\n",total);
    }

    else if(a==3)
    {
        total=quantity*5.00;
        printf("Total: R$ %0.2f\n",total);
    }

    else if(a==4)
    {
        total=quantity*2.00;
        printf("Total: R$ %0.2f\n",total);
    }

    else if(a==5)
    {
        total=quantity*1.50;
        printf("Total: R$ %0.2f\n",total);
    }

    return 0;

}
