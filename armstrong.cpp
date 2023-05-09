#include<stdio.h>
int main()
{
	int num,rem,arm=0,i,temp;
	printf("Enter the number:");
	scanf("%d",&num);
	temp=num;
	for(i=0;i<3;i++)
	{
		rem=num%10;
		arm=arm+(rem*rem*rem);
		num/=10;
	}
	printf("%d",temp);
	if(temp==arm)
	printf("Armstrong number\n");
	else
	printf("Not Armstrong\n");
}
