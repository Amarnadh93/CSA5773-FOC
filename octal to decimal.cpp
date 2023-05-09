#include <math.h>
#include <stdio.h>
int main()
{
	int octalnumber, decimalnumber = 0;
	int i = 0;
	printf("Enter an Octal number:");
	scanf("%d",&octalnumber);
	while (octalnumber != 0) 
	{
		decimalnumber = decimalnumber + (octalnumber % 10) * pow(8, i++);
		octalnumber = octalnumber / 10;
	}
	printf("Decimal number: %d", decimalnumber);
	return 0;
}
