#include<stdio.h>
void main(){
	int x,k;
	scanf("%d%d",&x,&k);
	for(int i=0;i<k;i++){
		int n1,n2,t,b;
		scanf("%d%d%d%d",&n1,&b,&t,&n2);
		if(x==0){
			printf("Game Over.\n");
			break;
		}
		if(t>x){
			printf("Not enough tokens.  Total = %d.\n",x);
			continue;
		}
		if((n1>n2&&b==0)||(n1<n2&&b==1)){
			x+=t;
			printf("Win %d!  Total = %d.\n",t,x);
			continue;
		}
		if((n1>n2&&b==1)||(n1<n2&&b==0)){
            x-=t;
            printf("Lose %d.  Total = %d.\n",t,x);
			continue;
		}
	}
}
