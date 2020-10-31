#include<stdio.h>
typedef struct{
	long n1;
	int n2;
	int n3;
}s;
void main(){
	int n,m,b;
	s a[1000];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%ld%d%d",&a[i].n1,&a[i].n2,&a[i].n3);
	}
	scanf("%d",&m);
	for(int i=0;i<m;i++){
		scanf("%d",&b);
		for(int j=0;j<n;j++){
			if(a[j].n2==b) printf("%ld %d\n",a[j].n1,a[j].n3);
		}
	}
}

