#include<stdio.h>
void main(){
	long c1,e,c2,d;
	double c;
	scanf("%ld%ld",&c1,&c2);
	e=(c2-c1)%100;
	c=(c2-c1)/100;
	d=c;
	if(e>=50) d++;
	int s,h,m;
	s=d%60;
	m=d/60%60;
	h=d/3600;
	printf("%d:%d:%d\n",h,m,s);
}
