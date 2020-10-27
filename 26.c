#include<stdio.h>
void main()
{
	unsigned int a,b,c,d,e,temp;
	while(scanf("%d%d",&a,&b)!=EOF){
		d=a;
		e=b;
		if(a<b){
			temp=a;
			a=b;
			b=temp;
		}
		for(c=a%b;c!=0;a=b,b=c) c=a%b;
		printf("%d\n",e*d/a);
	}
}
