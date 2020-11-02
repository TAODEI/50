#include<stdio.h>
typedef struct{
	int x;
	int fen;
}b;
b a[100000];
void main(){
	int i,n;
	scanf("%d",&n);
	for(i=0;i<n;i++){
		a[i].fen=0;
	}
	int max=0,b;
	for(i=0;i<n;i++){
		int a1,a2;
		scanf("%d%d",&a1,&a2);
		a[a1-1].x=a1;
		a[a1-1].fen+=a2;
		if(a[a1-1].fen>max){
			b=a1;
			max=a[a1-1].fen;
		}
	}
	printf("%d %d\n",b,max);
}
