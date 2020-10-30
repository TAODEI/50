#include<stdio.h>
void main (){
	int t;
	scanf("%d",&t);
	for(int i=0;i<t;i++){
		long a=0,b=0;
		scanf("%ld%ld",&a,&b);
		if(a%b==0) printf("YES\n");
		else printf("NO\n");
	}
}
