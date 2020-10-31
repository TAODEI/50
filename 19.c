#include<stdio.h>
#include<math.h>
void main(){
	int n;
	float max=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		int a,b;
		float s;
		scanf("%d%d",&a,&b);
		s=sqrt(a*a+b*b);
		if(s>max) max=s;
	}
	printf("%.2f\n",max);
}
