#include <stdio.h>
int reverse(int n)
{
	int sum=0,rem;
	while(n > 0)
	{
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}

	return sum;
}

int main()
{
	int n;
	printf("\nEnter an integer number :\n");
	scanf("%d",&n);

	printf("\nReverse Number is : %d\n",reverse(n));
	return 0;
}
