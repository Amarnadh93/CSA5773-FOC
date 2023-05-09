#include <stdio.h>
#include <stdlib.h>
int main()
{
int b[10],n,i,a;
printf("Enter a decimal number : ");
scanf("%d",&a);
for(i=0;a>0;i++)
{
b[i]=a%8;
a=a/8;
}
printf("\noctadecimal of Given Number : ");
for(i=i-1;i>=0;i--)
{
printf("%d",b[i]);
}
}
