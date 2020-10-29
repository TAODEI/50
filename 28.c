#include<stdio.h>
#include<string.h>
int n,i;
char a[10000];
void main(){
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		int m=0;
		for(int j=0;j<strlen(a);j++){
			if(a[j]>='0'&&a[j]<='9') m++;
		}
	printf("%d\n",m);
	}
}
