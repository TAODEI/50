#include<stdio.h>
#include<math.h>
int main(void)
{
	int num[100];
	int n;
	while(~scanf("%d",&n)&&n>0)
	{
		int i, j, k;
		for( i=0; i<n ;i++)
		scanf("%d",&num[i]);
		for( j=0; j<n ;j++){
		for( k=j+1 ;k<n ;k++)
		{
			if(fabs(num[j])<fabs(num[k]))
			{
				int temp;
				temp=num[j];
				num[j]=num[k];
				num[k]=temp;
			}}}
		for( i=0; i<n; i++)
		{
			if(i) printf(" ");
			printf("%d",num[i]);
		}
		printf("\n");
	}
	return 0;
}
