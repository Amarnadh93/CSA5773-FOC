#include<stdio.h>
int main()
{
	int n,i,sum;
	printf("limit of generating numbers:");
	scanf("%d",&n);
	sum=0;
	printf("Even series:");
	for(i=1;i<=n;i++)
	{
		if(i%2==0)
		{
			printf("%d",i);
			sum=sum=i;
		}
	}
	printf("\nsum of series:%d",sum);


}
