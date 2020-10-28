#include<stdio.h>
#include<string.h>
void main(){
	int n,s=0,z,a,x=0;
	char m2[100][18]={0};
	int n1[100],n2[100]={0},m3[100]={0};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		char m[18]={0};
		scanf("%s",m);
		strcpy(m2[i],m);
		for(int j=0;j<17;j++){
			if(m[j]>57||m[j]<48) s=1;	
			m3[j]=m[j]-'0';
		}
		if(s){
            s=0;
            n2[i]++;
         continue;
        }			x=m3[0]*7+m3[1]*9+m3[2]*10+m3[3]*5+m3[4]*8+m3[5]*4+m3[6]*2+m3[7]+m3[8]*6+m3[9]*3+m3[10]*7+m3[11]*9+m3[12]*10+m3[13]*5+m3[14]*8+m3[15]*4+m3[16]*2;
		z=x%11;
		n1[i]=m[17]-'0';
		if(z==0) a=1;
		else if(z==1) a=0;
		else if(z==2) a=88;
		else a=12-z;
		n2[i]=a;
	}
	for(int i=0;i<n;i++){
		if(n2[i]!=n1[i]) break;
		if(i==n-1) printf("All passed\n");
	}
	for(int i=0;i<n;i++){
		if(n2[i]!=n1[i]) printf("%.18s\n",m2[i]);
	}
}
