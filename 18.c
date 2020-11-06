#include<stdio.h>
int t;
void main(){
	scanf("%d",&t);
	for(int c=0;c<t;c++){
		int n,j,k,m,sum,max,x,y,a[1000][1000];
		scanf("%d%d%d%d",&m,&n,&x,&y);
		int y1;
		y1=y;
		for(j=0;j<m;j++){
			for(k=0;k<n;k++){
				scanf("%d",&a[j][k]);
			}
		}
		for(int j1=0,k1=0;x<=m;){
			int sum1=0,sum2=0;
			while(k1==0){
				sum=0;			
				for(j=j1;j<x;j++){
            		for(k=0;k<y;k++){
						sum+=a[j][k];
					}
//					printf(" sum=%d",sum);
				}
				break;
			}
			if(sum>max) max=sum;
			for(k=j1;k<x;k++){
				sum1+=a[k][k1];
				sum2+=a[k][y];
			}
			y++;
			k1++;
			sum=sum-sum1+sum2;
			if(sum>max) max=sum;
			if(y==n){
				k1=0;
				y=y1;
				j1++;
				x++;
			}
		}
		printf("%d\n",max);
	}
}


