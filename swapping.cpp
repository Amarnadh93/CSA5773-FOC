#include<stdio.h>
int main()
{
	int a,b,temp;
	printf("enter A:");
	scanf("%d",&a);
	printf("enter B:");
	scanf("%d",&b);
	printf("\nBEFORE SWAP\nA:%dB:%d",a,b);
	temp=a;
	a=b;
	b=temp;
	/*
	a=a+b;
	b=a-b;
	a=a-b;
	*/
	printf("\nAFTER SWAP\NA:%d B:%d",a,b);
	
}
