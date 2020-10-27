#include<stdio.h>
#include<string.h>
void main(){
	int i,sum=0;
	char a[][5]={"ling","yi","er","san","si","wu","liu","qi","ba","jiu"};
	char n[100]="0";
	scanf("%s",n);
	for(i=0;i<strlen(n);i++) sum+=n[i]-'0';
	int b,c,d;
	b=sum%10;
	c=sum/10%10;
	d=sum/100;
	if(d!=0) printf("%s ",a[d]);
	if(c!=0) printf("%s ",a[c]);
	printf("%s",a[b]);
}
