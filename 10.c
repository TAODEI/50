#include<stdio.h>
void main(){
	int m,n,i,j,num,k;
       	while(scanf("%d%d",&n,&m)!=EOF){
	int s[50][6];
	float sum[50],sum2[6];
	for(i=0;i<n;i++){
		for(j=0;j<m;j++)
			scanf("%d",&s[i][j]);
	}
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			sum2[i]+=s[i][j];
		}
	}
	for(i=0;i<m;i++)
                for(j=0;j<n;j++)
                        sum[i]+=s[j][i];
	for(i=0;i<n;i++)
		printf("%.2f ",sum2[i]/m);
	putchar('\n');
	for(i=0;i<m;i++)
		printf("%.2f ",sum[i]/n);
	putchar('\n');
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			if(s[i][j]<sum[j]/n)
				break;
			if(j=m)
				num++;
		}}
	if(m>n)
		k=m;
	else k=n;

	for(i=0;i<k;i++){
                for(j=0;j<k;j++){
                        s[i][j]=0;
		}
	sum[i]=0;sum2[i]=0;}
	printf("%d\n\n",num);
	num=0;
	}
	}





