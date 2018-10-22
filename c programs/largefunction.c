#include <stdio.h>
int large(int a,int b, int c)
{
	int largest=0;
	if(a>b && a>c)
		largest=a;
	else if(b>a && b>c)
		largest=b;
	else
		largest=c;
	return largest;
}
int main()
{
	int m,n,o;
	printf("Enter three numbers:\n ");
	scanf("%d%d%d",&m,&n,&o);
	printf("Largest number is: %d\n",large(m,n,o));
	return 0;
}

