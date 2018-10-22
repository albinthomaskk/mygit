#include <stdio.h>
int Perfect(int n)
{
    int s,sum=0;
    for(s=1; s<n; s++)
    {
        if(n%s==0)
            sum+=s;
    }
     
    if(sum==n)
        return 1;
    else
        return 0; 
}
int main()
{
    int num,s;
    int sum;
  
    printf("Enter an integer number:\n ");
    scanf("%d",&num);
  
    if(Perfect(num))
        printf("%d is a perfect number.\n",num);
    else
        printf("%d is not a perfect number.\n",num);
  
    return 0;
}
