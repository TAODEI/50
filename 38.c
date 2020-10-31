#include<stdio.h>
void main(){
	int m,i,n,a[100],b[100];
	scanf("%d%d",&n,&m);
	for(i=0;i<m;i++){
		scanf("%d",&a[i]);
	}
	for(i=0;i<m;i++){
        scanf("%d",&b[i]);
	}
	for(i=0;i<n;i++){
		int fen=0;
		for(int j=0;j<m;j++){
			int x;
			scanf("%d",&x);
			if(x==b[j]) fen+=a[j];
		}
		printf("%d\n",fen);
	}
}
