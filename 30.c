#include<stdio.h>
#include<string.h>
void main(){
	char a[1000000],b[1000000];
	long p1=0,p2=0;
	int d1,d2,i,a1=0,a2=0;
	scanf("%s%d%s%d",a,&d1,b,&d2);
	for(i=0;i<strlen(a);i++){
		if(d1==a[i]-'0') a1++;
		//printf(" a[i]=%d %d",a[i]-'0',a1); 
	}
	if(a1!=0) p1=d1;
	for(i=0;i<strlen(b);i++){
		//printf(" b[i]=%d %d",b[i]-'0',a2,d2);
        if(d2==b[i]-'0') a2++;
    }
	if(a2!=0) p2=d2;
	//printf("%d %d  ",a1,a2);
   	for(i=0;i<a1-1;i++){
    	p1=p1*10+d1;
    }
	for(i=0;i<a2-1;i++){
        p2=p2*10+d2;
    }
	printf("%ld\n",p1+p2);
}


