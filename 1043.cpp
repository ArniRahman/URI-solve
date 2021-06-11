#include<stdio.h>
int main()
{
    double a,b,c;
    scanf("%lf%lf%lf",&a,&b,&c);

    if(a+b>c&&b+c>a&&c+a>b)
    {
      double Perimeter=a+b+c;
      printf("Perimetro = %0.1f\n",Perimeter);
    }

    else
    {
        double area=((a+b)/2)*c;
        printf("Area = %0.1f\n",area);
    }



    return 0;


}
