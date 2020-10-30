#include<stdio.h>
void main(){
	int n;
	scanf("%d",&n);
	int i,a,b,c;
	a=n/100;
	b=n/10%10;
	c=n%10;
	for(i=0;i<a;i++) putchar('B');
	for(i=0;i<b;i++) putchar('S');
	for(i=1;i<=c;i++) printf("%d",i);
	putchar('\n');
}
