#include<stdio.h>
void main(){
	int n,m;scanf("%d",&n);
	while(n!=EOF&&n!=1){
		if(n%2==0){
			n=n/2;
			m++;
		}
		else{
			n=(3*n+1)/2;
			m++;
		}
	}
	printf("%d\n",m);}

