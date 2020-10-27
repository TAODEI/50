#include<stdio.h>
void main(){
	int i;
	int a[10]={0};

	char n[1000]="0";
	scanf("%s",n);
	for(i=0;i<1000;i++)
		for(int j=0;j<10;j++)
			if(n[i]-48==j) a[j]++;
	for(i=0;i<10;i++)
		if(a[i]!=0) 
			printf("%d:%d\n",i,a[i]);
}
