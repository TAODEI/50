#include<stdio.h>
void main(){
	int m,n,i,j;
	while(scanf("%d%d",&n,&m)!=EOF&&(n!=0||m!=0)){
		int a[100000];
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		for(i=0;i<m;i++){
			for(j=i+1;j<n;j++){
				if(a[i]<a[j]){
				int temp;
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
				}
			}
		}
		if(n>=m){
			for(i=0;i<m;i++){
				if(i!=m-1) printf("%d ",a[i]);
				else printf("%d",a[i]);
			}
		}else{
			for(i=0;i<n;i++){
				if(i!=n-1) printf("%d ",a[i]);
				else printf("%d",a[i]);
			}
		}
		putchar('\n');
	}
}
