#include<stdio.h>
void main()
{
int w,p;
float x;
float y;
printf("\nFORMATTED INPUT OUTPUT\n");
printf("enter two floating point number\n");
scanf("%f%f",&x,&y);
printf("\n enter the field width\n");
scanf("%d",&w);
printf("\nenter the presition\n");
scanf("%d",&p);
printf("%*.*f\n",w,p,x);
printf("%e\n",x);
printf("%-7.2f\n",y);
printf("%10.2e\n",y);
}
