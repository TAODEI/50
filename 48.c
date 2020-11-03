#include<stdio.h>
void ha(int y1,int y2,int y3){
	if(y1>=y2&&y1>y3) putchar('C');
	if(y3>=y2&&y3>=y1) putchar('B');
	if(y2>y3&&y2>y1) putchar('J');
}
void main(){
	int i,n;
	int x[2]={0};
	int y[6]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		char a[2],b[2];
		scanf("%s%s",a,b);
		if(a[0]=='C'){
			if(b[0]=='B'){
                x[0]++;
                y[0]++;
			}
			if(b[0]=='J'){
                x[1]++;
                y[1]++;
			}
		}
		if(a[0]=='J'){
			if(b[0]=='C'){
				x[0]++;
				y[4]++;
			}
			if(b[0]=='B'){
                x[1]++;
                y[2]++;
			}
			
		}
		if(a[0]=='B'){
			if(b[0]=='C'){
				x[1]++;
				y[3]++;
			}
			if(b[0]=='J'){
                x[0]++;
                y[5]++;
			}
		}
	}
	printf("%d %d %d\n",x[1],n-x[1]-x[0],x[0]);
	printf("%d %d %d\n",x[0],n-x[1]-x[0],x[1]);
	ha(y[1],y[2],y[3]);
	putchar(' ');
    ha(y[4],y[5],y[0]);
	putchar('\n');
}
