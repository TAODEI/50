#include<stdio.h>
#include<string.h>
void main(){
	int b,i,n;
	char a[128];
	int s1[5]={'a','e','i','o','u'};
	int s2[5]={0};
	scanf("%d",&n);
	for(i=0;i<n;i++){
		scanf("%s",a);
		for(int j=0;j<strlen(a);j++)
			for(int k=0;k<5;k++)
				if(a[j]==s1[k]) s2[k]++;
		for(int j=0;j<5;j++){
		printf("%c:%d\n",s1[j],s2[j]);
		s2[j]=0;
		}
		if(i<n-1) putchar('\n');
	}
}
