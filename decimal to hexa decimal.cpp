#include<stdio.h>
int main()
{
	long dec,quo,rem;
	int i,j=0;
	char hex[100];
	printf("Enter decimal number:");
	scanf("%d",&dec);
	quo=dec;
	printf("Hexadecimal Value:");
	while(quo!=0)
	{
		rem=quo%16;
		if(rem<10)
		{
			hex[j++]=48+rem;
		}
		else
		{
			hex[j++]=55+rem;
		}
		quo/=16;
	}
	for(i=j;i>=0;i--)
	{
		printf("%c",hex[i]);
	}
}
