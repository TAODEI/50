#include<stdio.h>
void main(){
	int n,i,k,s;
    while(scanf("%d",&n)!=EOF&&n!=0){
		int a[100]={0};
		for(i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		a[n]=1410065407;
		for(i=0;i<n;i++){
			for(s=i+1;s<=n;s++){
				if(a[i]>a[s]) break;
				if(s==n){
					int k;
					k=a[i];
					a[i]=a[0];
					a[0]=k;
					i+=100;
				}
			}
		}
		for(i=0;i<n;i++){
			if(i!=n-1) printf("%d ",a[i]);
			else printf("%d",a[i]);
		}
		putchar('\n');
	}
}
