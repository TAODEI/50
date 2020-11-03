#include<stdio.h>
#include<string.h>
void main(){
	char a[85];
	char b[85];
	int i,n=0,y=0;
	int x[80]={0};
	scanf("%s%s",a,b);
	for(i=0;i<strlen(a);i++){
		int h=0;
		for(int j=0;j<n;j++){
			if(x[j]==a[i]){
				h=1;
				break;
			}
		}
		if(h==1) break;
		if(a[i]!=b[y]){
			x[n]=a[i];
			n++;	
		}else y++;
	}
	for(i=0;i<n;i++){
		if(x[i]<='z'&&x[i]>='a') x[i]-=32;
		printf("%c",x[i]);
	}
	putchar('\n');
}


