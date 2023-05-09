#include<stdio.h>
int main()
{
	int n,sum;
	printf("limit of sum of cubes number:");
	scanf("%d",&n);
	sum=n*(n+1)/2;
	sum*=sum;
	/*for(i=0;i<n;i++)
	{
		sum+=i*i*i;
	}
	*/
	printf("sum of cubes:%d",sum);


}
