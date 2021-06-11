#include<stdio.h>
#include<math.h>
int main()
{
    double x1,y1,x2,y2;
    double x,y;
    double distance;


    scanf("%lf%lf%lf%lf",&x1,&y1,&x2,&y2);

    x=x2-x1;
    y=y2-y1;

    distance=sqrt((x*x)+(y*y));

    printf("%0.4f\n",distance);
    return 0;
}
