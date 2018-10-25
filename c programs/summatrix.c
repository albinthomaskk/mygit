#include<stdio.h>
main()
{
int a[100][100],b[100][100],i,j,n,m,p,q;
printf("\nenter the first array row size");
scanf("%d",&m);
printf("\nenter the first array column size");
scanf("%d",&n);
printf("\nenter the second array row size");
scanf("%d",&p);
printf("\nenter the second array column size");
scanf("%d",&q);
if(m==p&&n==q)
{
printf("\nenter the elements of first array");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[m][n]);
}
}
printf("\nenter the elements of second  array");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[p][q]);
}
}
int c[100][100];
a[m][n]=a[m][n]+b[p][q];
printf("\nthe sum of two matrixes is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[m][n]);
}
printf("\n");
}
}
else
printf("\nenter the currect order");
}

