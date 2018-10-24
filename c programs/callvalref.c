#include<stdio.h>
void value(int);
void ref(int *);
main()
{
int a=10,b=10;
printf("\ncall by value \n");
printf("\na=%d\n",a);
value(a);
printf("\nafter calling value(a)\n");
printf("\na=%d\n",a);
printf("\ncall by reference\n");
printf("\nb=%d\n",b);
ref(&b);
printf("\nafter calling ref(&b)\n");
printf("\nb=%d",b);
}
void value(int x)
{
x++;
printf("\nx=%d\n",x);
}
void ref(int *p)
{
(*p)++;
}


