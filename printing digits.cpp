#include<stdio.h>
int main()
{
	int n,i=0,rem,arr[100],j;
	printf("enter the number:");
	scanf("%d",&n);
	printf("digits of the number:");
	while(n!=0)
	{
		rem=n%10;
		arr[i]=rem;
		i++;
		n/=10;
	}
	for(j=0;j<i;j++)
	{
		printf("%d",arr[j]);
	}
}
