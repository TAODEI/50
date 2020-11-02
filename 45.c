#include<stdio.h>
#include<string.h>
void main(){
	char str[101];
	while(scanf("%s",str)){
		//char x[2];
		//x[0]='E';
		//printf("%s",x);
		//if(strcmp(str,x)){
		if(str[0]=='E') break;
		int a[3]={0};
		int i;
		for(i=0;i<strlen(str);i++){
			if(str[i]=='Z') a[0]++;
			if(str[i]=='O') a[1]++;
			if(str[i]=='J') a[2]++;
		}
		for(i=0;i<100;i++){
			if(a[0]!=0){
				putchar('Z');a[0]--;
			}
			if(a[1]!=0){
        	    putchar('O');a[1]--;
			}
			if(a[2]!=0){
        	    putchar('J');a[2]--;
			}
			if(a[0]==0&&a[1]==0&&a[2]==0){
			putchar('\n');
			break;
			}
		}
	}
}
