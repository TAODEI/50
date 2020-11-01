#include<stdio.h>
#include<string.h>
typedef struct{
	int zimu;
	int n;
}s;
int w=2;
s b[1000];
void ha(){
	if(b[0].zimu>b[1].zimu) b[0]=b[1];
	if(b[0].n==b[w].n){
		b[1]=b[w];
		w++;
		ha();
	}
}
void main(){
	char a[1000];
	int i,k,j,n=0;
	fgets(a,1000,stdin);
	for (int i = 0; i < 1000; i++) {
		b[i].zimu = i + 65;
		b[i].n = 0;
	}
	for(i=0;i<strlen(a);i++){
		if(a[i]>64 && a[i]<91) a[i]+=32;
		if(a[i]>96 && a[i]<123){
			for(j = 0; j <= n; j++){
                if(a[i] == b[j].zimu){
                    b[j].n++;
                    break;
                }
                if(j == n){
                    b[n].zimu = a[i];
                    b[n].n++;
                    n++;
					break;
				}
			}
		}
	}
	for(i=0;i <= n;i++){
		for(k = i;k <= n;k++){
			if(b[k].n > b[i].n){
				s tmp;
				tmp = b[i];
				b[i] = b[k];
				b[k] = tmp;
			}
		}
	}
	if(b[0].n == b[1].n) ha();
	printf("%c %d\n",b[0].zimu,b[0].n);
}
