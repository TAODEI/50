#include<stdio.h>
void main(){
	int t;
	scanf("%d",&t);
	for(int c=0;c<t;c++){
		int n;
		double max=0,a[100]={0};
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("%lf",&a[i]);
			if(a[i]>max) max=a[i];
		}
		printf("%.2lf\n",max);
	}
}



