#include<stdio.h>
main()
{
int a[100][100],b[100][100],i,j,n,m,p,q,k;
printf("\nenter the first array row size");
scanf("%d",&m);
printf("\nenter the first array column size");
scanf("%d",&n);
printf("\nenter the second array row size");
scanf("%d",&p);
printf("\nenter the second array column size");
scanf("%d",&q);
if(n==p)
{
printf("\nenter the elements of first array");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
scanf("%d",&a[i][j]);
}
}
printf("\nenter the elements of second  array");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
scanf("%d",&b[i][j]);
}
}
printf("\nthe first matrix is\n");
for(i=0;i<m;i++)
{
for(j=0;j<n;j++)
{
printf("%d\t",a[i][j]);
}
printf("\n");
}
printf("\nthe second  matrix is\n");
for(i=0;i<p;i++)
{
for(j=0;j<q;j++)
{
printf("%d\t",b[i][j]);
}
printf("\n");
}

int c[100][100];

printf("\nthe multiplication  of two matrixes is\n");
for(i=0;i<m;i++)
{
for(j=0;j<q;j++)
{
c[i][j]=0;
for(k=0;k<p;k++)
{
c[i][j]=c[i][j]+(a[i][k]*b[k][j]);
}
printf("%d\t",c[i][j]);
}
printf("\n");
}
}
else
printf("\nenter the currect order");
}

