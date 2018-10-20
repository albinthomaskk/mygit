#include<stdio.h>
int sum(int n);
int main()
{
int n;
printf("enter the number\n");
scanf("%d",&n);
printf("\nthe sum of digits of %d is %d",n,sum(n));
}
int sum(int n)
{
int s;
if(n==0)
return 0;
else
s=n%10+sum(n/10);
return s;
}
