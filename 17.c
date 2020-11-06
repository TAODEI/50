#include<stdio.h>
void main()
{
	int i,m,n,j,k,s[10000];
	scanf("%d%d",&m,&n);
	s[0]=2;
	for(i=3,k=1;k<n;i=i+2)
		for(j=0;j<=k;j++){
			while(j==k){
				s[k]=i;
				k++;break;
			}
			if(i%s[j]==0)
				break;
		}
	for(i=m-1;i<n;i++){
		printf("%d",s[i]);
		while((i-m+2)%10!=0&&i!=n-1){
			putchar(' ');break;
		}
		while((i-m+2)%10==0&&(i-m+1)!=0){
			putchar('\n');break;
		}
	}	
}


			
