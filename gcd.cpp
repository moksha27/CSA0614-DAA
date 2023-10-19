#include<stdio.h>
int gcd(int a,int b)
{
	while(b != 0)
	{
		int temp = a % b;
		a=b;
		b=temp;
	}
	return a;
}
int main()
{
	int num1,num2;
	printf("enter two numbers:");
	scanf("%d%d",&num1,&num2);
	printf("gcd of %d and %d is %d\n",num1,num2,gcd(num1,num2));
	
}
