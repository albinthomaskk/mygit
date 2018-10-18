#include<stdio.h>
main()
{
int i,n;
printf("enter the number:");
scanf("%d",&n);
printf("\nMultiplication table of %d....",n);
for(i=1;i<=10;i++)
{
printf("\n\t%d * %d = %d",i,n,i*n);
}
} 