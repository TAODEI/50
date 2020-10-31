#include<stdio.h>
void main(){
	int n;
	while(scanf("%d",&n)!=EOF&&n!=0){
		int i,x,b1,b2,b3,b4,b5,b6,y=0;
		float a1,a2,a3,a4,a5;
		for(i=0;i<n;i++){
			scanf("%d",&x);
			a1=x/100;
			b1=a1;
			a2=(x-b1*100)/50;
			b2=a2;
			a3=(x-b1*100-b2*50)/10;
			b3=a3;
			a4=(x-b1*100-b2*50-b3*10)/5;
			b4=a4;
			a5=(x-b1*100-b2*50-b3*10-b4*5)/2;
			b5=a5;
			b6=x-b1*100-b2*50-b3*10-b4*5-b5*2;
			y=b1+b2+b3+b4+b5+b6+y;
		}
		printf("%d\n",y);
	}
}

