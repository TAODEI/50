#include<stdio.h>
void main()
{
printf("请输入三个实数\n");
double a,b,c;
scanf("%lf%lf%lf",&a,&b,&c);
if (a==b&&b==c)
printf("1\n");
//if else ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
else if (a+c>b&&a+b>c&&b+c>a)
{if ((a==b&&a!=c)||(a==c&&a!=b)||(b==c&&b!=a))
printf("2\n");
else printf("3\n");}
else printf("0\n");}
