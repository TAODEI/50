#include<stdio.h>
void main(){
	int n,x=0,y=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b,c,d;
		scanf("%d%d%d%d",&a,&b,&c,&d);
		if(b==a+c&&d!=a+c) x++;
		if(b!=a+c&&d==a+c) y++;
	}
	printf("%d %d\n",y,x);
}


