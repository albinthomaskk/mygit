#include<stdio.h>
void main()
{
 int mathematics,science,english,total,prcnt,physics,chemistry;
 printf("\n Enter marks of 5 subjects each out of 100 ");
 printf("\n\n Maths = ");
 scanf("%d",&mathematics);
 printf("\n Science = ");
 scanf("%d",&science);
 printf("\n English = ");
 scanf("%d",&english);
printf("\n physics =");
scanf("%d",&physics);
printf("\nchemistry =");
scanf("%d",&chemistry);
 total=mathematics+science+english+physics+chemistry; 
 printf("\n Total marks = %d/500",total);
 prcnt=total/5;  
 printf("\n\n Percentage = %d",prcnt);
 if(prcnt>=80)
 printf("\n\n Your Grade : A+");
 else if(prcnt>=75)
 printf("\n\n Your Grade : A");
 else if(prcnt>=60)
 printf("\n\n Your Grade : B");
 else if(prcnt>=45)
 printf("\n\n Your Grade : C");
 else if(prcnt>=35)
 printf("\n\n Your grade : D");
 else
 printf("\n\n You Are Failed");
}
