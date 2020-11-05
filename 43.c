#include<stdio.h>
void main(){
	int i,j,m,n,a,b,x,h[500][500];
	scanf("%d%d%d%d%d",&n,&m,&a,&b,&x);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%d",&h[i][j]);
		    if(h[i][j]>=a&&h[i][j]<=b) h[i][j]=x;
		}
	}
	for(i=0;i<n;i++){
        for(j=0;j<m;j++){
			if(h[i][j]<10&&j!=m-1) printf("00%d ",h[i][j]);
			if(h[i][j]<10&&j==m-1) printf("00%d\n",h[i][j]);
			if(h[i][j]>9&&h[i][j]<100&&j!=m-1) printf("0%d ",h[i][j]);
			if(h[i][j]>9&&h[i][j]<100&&j==m-1) printf("0%d\n",h[i][j]);
			if(h[i][j]>99&&j!=m-1) printf("%d ",h[i][j]);
			if(h[i][j]>99&&j==m-1) printf("%d\n",h[i][j]);
		}
	}
}
