#include<stdio.h>

void main()

{


int num1,num2,n,rem;

int n=0,sum=0,i;

printf("enter the limits\n");

scanf("%d%d",&num1,&num2);

printf("amstttrong number between %d and %d are:\n",num1,num2);
for(int i=num1+1;i<num2;i++)
{
temp2=i;
temp1=i;
}
while(temp1!=0)

{

temp1/=10;
++n;
}
while(temp2!=0)
{
rem=temp2%10;
sum+=pow(rem,n);
temp2/=10;
}

if(sum==i)
{
printf("\n%d",i);
}
n=0;
sum=0;

}
