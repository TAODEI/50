#include<stdio.h>
void main()
{
	int a,b,c,temp;
	printf("请输入两个整数：\n");
	scanf("%d%d",&a,&b);
	if(a<b){
	temp=a;a=b;b=temp;}
	for(;c!=0;a=b,b=c)
		c=a%b;
	printf("最大公约数为：%d\n",a);}



