#include<stdio.h>
void main(){
	int n,i,j[100],k,s;
       	while(scanf("%d",&n)!=EOF&&n!=0){
		for(i=0;i<n;i++)
			scanf("%d",&j[i]);
		j[n]=1410065407;
		for(i=0;i<n;i++)
			for(s=i+1;s<=n;s++){
				if(j[i]>j[s])
					break;
				if(s=n){
					k=j[i];
					j[i]=j[0];
					j[0]=k;
					i=i+100;
		}
			}
		for(i=0;i<n;i++)
			printf("%d ",j[i]);
		putchar('\n');
	}}

