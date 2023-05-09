#include<stdio.h>
int main()
{
	int n[10],a,i,sum,avg;
	printf("limit of numbers:");
	scanf("%d",&a);
	for(i=0;i<a;i++)
	{
		scanf("%d",&n[i]);
	}
	printf("series:");
	for(i=0;i<a;i++)
	{
		printf("%d",n[i]);
	}
	sum=0;
	printf("\n sum of series:");
	for(i=0;i<a;i++)
	{
		sum=sum+n[i];
	}
	printf("%d",sum);
	avg=sum/a;
	printf("\n Average of series:%d",avg);
}
