#include<stdio.h>
void main()
{
	int a,i,j;
	printf("请输入奇数的层数：");
	scanf("%d",&a);
	for(i=1;i<=a/2;i++){
		for(j=1;j<i;j++)
			putchar(' ');
		for(j=1;j<a+3-2*i;j++)
			putchar('*');
	putchar('\n');
	}
	for(i=1;i<=a/2+1;i++){
		for(j=1;j<=(a+1)/2-i;j++)
                         putchar(' ');
                for(j=1;j<=2*i-1;j++)
                         putchar('*');
        putchar('\n');}	
	}
