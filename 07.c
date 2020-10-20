#include<stdio.h>
#include<math.h>
int main(void){
        int num[100];
        int n;
        while(~scanf("%d",&n)&&n>0){
	       	int i,j,s=1,k;
		for(i=0;i<n;i++)
		scanf("%d",&num[i]);
		for(i=0;i<n;i++){
			while(num[i]%2!=0){
				s*=num[i];break;}
		}
	printf("%d\n",s);}}
