#include<stdio.h>
int i,j,b,m,n;
void s(int b){
	float a=0,c;
	for(i=1;i<=b;i++){
		c=i;
		if(i%2!=0) a+=1/c;
		if(i%2==0) a-=1/c;
	}
	printf("%.2f\n",a);
}


void main(){
	while(scanf("%d",&n)!=EOF)
		for(j=1;j<=n;j++){
			scanf("%d",&m);
			s(m);
		}
}
