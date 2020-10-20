#include<stdio.h>
void main()
{
	int num[100];
	int n;
	double sum=0;
	while(~scanf("%d",&n)&&n>0)
	{
		int i, j, k;
		for( i=0; i<n ;i++)
		scanf("%d",&num[i]);
		for( j=0; j<n ;j++){
		for( k=j+1 ;k<n ;k++)
		{
			if(num[j]<num[k])
			{
				int temp;
				temp=num[j];
				num[j]=num[k];
				num[k]=temp;
			}}}
		for( i=1; i<n-1; i++)
			sum+=num[i];
		printf("%.2f",sum/(n-2));
		sum=0;
		printf("\n");
	}
}
