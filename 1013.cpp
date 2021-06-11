#include<stdio.h>

int main()
{
int a,b,c;
scanf("%d%d%d",&a,&b,&c);

int ma;
ma=a;

if (b>ma)
    ma=b;

    if(c>ma)
        ma=c;
    printf("%d eh o maior\n",ma);



return 0;
}
