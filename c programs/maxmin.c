#include<stdio.h>
main()
{
int i,a[100],min,max,n;
printf("\nenter the array limit");
scanf("%d",&n);
printf("\nenter the array elements");

for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
min=a[0],max=a[0];
for(i=1;i<n;i++)
{
if(min>a[i])
min=a[i];
if(max<a[i])
max=a[i];
}
printf("\nmax=%d min=%d",max,min);
}


