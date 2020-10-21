#include<stdio.h>
void main(){
	int a,c,e,sum=0,i;
	char b,d;
	int n[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	while(scanf("%d%c%d%c%d",&a,&b,&c,&d,&e)!=EOF){
		if(a%400==0||a%4==0&&a%100!=0)
			n[1]=29;
		for(i=0;i<c-1;i++)
			sum+=n[i];
		printf("%d\n",sum+e);
		sum=0;
		n[1]=28;
	}}


