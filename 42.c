#include<stdio.h>
#include<string.h>
void main(){
	int i,n,j;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char a[51];
		int c=0;
		int x[4]={0};
		scanf("%s",a);
		if(strlen(a)>7&&strlen(a)<17){
			for(j=0;j<strlen(a);j++){
				if(a[j]>64 && a[j]<91) x[0]=1;
				else if(a[j]>96 && a[j]<123) x[1]=1;
				else if(a[j]>47 && a[j]<58) x[2]=1;
				else x[3]=1;
			}
		}
		c=x[0]+x[1]+x[2]+x[3];	
		if(c>2) puts("YES");
		else puts("NO");
	}
}
