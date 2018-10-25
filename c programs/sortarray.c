#include<stdio.h>
main()
{
int a[100],i,n,j,tem;
printf("\nenter the array size");
scanf("%d",&n);
printf("\nenter the array elements");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
printf("\nbefore sorting the elements of the array are\n");
for(i=0;i<n;i++)
{
printf("\n\t%d",a[i]);
}

for(i=0;i<n;i++)
{
for(j=i+1;j<n;j++)
{
if(a[i]>a[j])
{
tem=a[i];
a[i]=a[j];
a[j]=tem;
}
}
}
printf("\nafter the sorting elements of the array are\n");

for(i=0;i<n;i++)
{
printf("\n%d",a[i]);
}
}

