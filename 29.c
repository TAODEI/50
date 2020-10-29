#include<stdio.h>
int i=0,n,j,a[9]={0},c,sum=0;
void main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<9;i++){
		j=1;
		c=0;
		while(a[j]!=0){
			c=a[i]*11+c;
			j++;
		}
		sum=sum+c;
	}
	printf("%d\n",sum);
}
