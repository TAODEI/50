#include<stdio.h>
void main(){
	int c,i,a;
	char b[2];
	scanf("%d%s",&a,b);
	for(i=0;i<a;i++){
		printf("%c",b[0]);
	}
	putchar('\n');
	if(a%2==0) c=a/2-2;
	else c=a/2-1;
	for(i=0;i<c;i++){
		printf("%c",b[0]);
		for(int j=0;j<a-2;j++){
			printf(" ");
		}
		printf("%c\n",b[0]);
	}
	for(i=0;i<a;i++){
		printf("%c",b[0]);
	}
	putchar('\n');
}
