#include<stdio.h>
int main()
{
    char name[100];
    double salary;
    double total1;
    double total2;

    scanf("%s",&name);
    scanf("%lf",&salary);
    scanf("%lf",&total1);


    total2=salary+total1*(15/100.00);

    printf("TOTAL = R$ %0.2f\n",total2);
    return 0;
}
