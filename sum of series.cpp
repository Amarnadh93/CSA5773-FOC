#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("limit of generating numbers:");
	scanf("%d",&n);
	printf("sum of series:");
	for(i=1;i<=n;i++)
	{
		sum=sum+i;
	}
	printf("%d",sum);
}
