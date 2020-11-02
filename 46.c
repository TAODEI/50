#include<stdio.h>
void main(){
	int n,j,i,b=0;
	scanf("%d",&n);
	int a[1000];
	for(i=0;i<n;i++){
		int x,y;
		scanf("%d",&x);
		y=x/1000+x/100%10+x/10%10+x%10;
		for(j=0;;j++){
			if(a[j]==y) break;
			if(j==b){
				a[b]=y;
				b++;
				break;
			}
		}
	}
	for(i=0;i<b-1;i++){		
		for(j=i+1;j<b;j++){
			if(a[i]>a[j]){
				int tmp;
				tmp=a[i];
				a[i]=a[j];
				a[j]=tmp;				
			}
		}
	}
	printf("%d\n",b);
	for(i=0;i<b;i++){
		if(i!=b-1) printf("%d ",a[i]);
		else printf("%d",a[b-1]);
	}
	putchar('\n');
}
