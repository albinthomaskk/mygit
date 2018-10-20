#include<stdio.h>
long int fact(int n);
int main()
{
int n;
printf("enter a positive nbr\n");
scanf("%d",&n);
printf("\nfactorial of %d =  %d",n,fact(n));
}
long int fact(int n)
{
if(n>=1)
return n*fact(n-1);
else
return 1;
}
