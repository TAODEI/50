#include<stdio.h>
#include<math.h>
typedef struct s{
	int ii;
	int jj;
	long aa;
}s;
s bb[1000];
void main(){
	long a[1000][1000];
	int b,j,i,m,n,x;
	scanf("%d%d%d",&m,&n,&x);
	for(i=0;i<n;i++){
		for(j=0;j<m;j++){
			scanf("%ld",&a[i][j]);
		}
	}
	int nn[1000]={0};
	int mm[1000]={0};
	int c=0;
	for(i=1;i<n-1;i++){
		for(j=1;j<m-1;j++){
			for(int i1=0;;i1++){
				int hh=0;
				for(int j1=0;j1<m;j1++){
					if(i==i1&&j==j1) continue;
					if(a[i][j]==a[i1][j1]){
						hh=1;
						break;
					}
				}
				if(hh==1) break;
				if(i1==n-1){
					bb[c].ii=i;
					bb[c].jj=j;
					bb[c].aa=a[i][j];
					c++;
					break;
				}
			}
		}
	}
	int n1,m1;
	for(i=0;i<c;i++){
		if(b==2) break;
		if(abs(a[bb[i].ii-1][bb[i].jj-1]-bb[i].aa)<=x) continue;
		if(abs(a[bb[i].ii-1][bb[i].jj]-bb[i].aa)<=x) continue;
		if(abs(a[bb[i].ii-1][bb[i].jj+1]-bb[i].aa)<=x) continue;
		if(abs(a[bb[i].ii][bb[i].jj-1]-bb[i].aa)<=x) continue;
		if(abs(a[bb[i].ii][bb[i].jj+1]-bb[i].aa)<=x) continue;
		if(abs(a[bb[i].ii+1][bb[i].jj-1]-bb[i].aa)<=x) continue;
		if(abs(a[bb[i].ii+1][bb[i].jj]-bb[i].aa)<=x) continue;
		if(abs(a[bb[i].ii+1][bb[i].jj+1]-bb[i].aa)>x){
			b++;
			n1=bb[i].ii;
			m1=bb[i].jj;
		}
	}
	if(b==1) printf("(%d, %d): %ld\n",m1+1,n1+1,a[n1][m1]);
	if(b==0) puts("Not Exist");
	if(b==2) puts("Not Unique");
}
