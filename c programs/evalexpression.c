#include<stdio.h>
void main()
{
int base,exponent;
long int result=1;
printf("enter base\n");
scanf("%d",&base);
printf("\nenter the exponent\n");
scanf("%d",&exponent);
while(exponent!=0)
{
result*=base;
--exponent;
}
printf("\nanswer=%d",result);
}
 