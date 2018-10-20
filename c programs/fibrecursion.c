#include<stdio.h>
int fib(int);
int main()
{
int n,c=0,i;
printf("enter a positive number");
scanf("%d",&n);
printf("\n the fibonacci series is\n");
for(i=1;i<=n;i++)
{
printf("%d\n",fib(c));
c++;
}
}

int fib(int n)
{
if(n==0)
return (0);
else if(n==1) 
return (1);
else
return(fib(n-1) + fib(n-2));
}
