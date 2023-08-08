#include<stdio.h>
void main()
{
	int fact=1,i,n;
	printf("enter the number");
	scanf("%d",&n);
	while(i<=n)
	{
		fact=fact*i;
		i++;
	}
		printf("factorial of the number is %d",fact);	
}
