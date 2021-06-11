#include<stdio.h>
int main()
{
    int a,b;
    int number;
    double c;
    double salary;

    scanf("%d%d%lf",&a,&b,&c);

    number=a;
    salary=b*c;


    printf("NUMBER = %d\n",number);
    printf("SALARY = U$ %0.2f\n",salary);
    return 0;
}
