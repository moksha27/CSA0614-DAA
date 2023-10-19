#include<stdio.h>
long int factorial(int n)
{
	if(n<=1)
	{
		return 1;
	}
	else
	{
		return n*factorial(n-1);
	}
}
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	if(num<1)
	{
		printf("factorial of number is not defined for negative integers!/n");
	}
	else
	{
		printf("factorial of %d=%ld",num,factorial(num));
	}
}
