#include<stdio.h>
int reversenumber(int n)
{
	int reversed = 0;
	while(n != 0)
	{
		reversed=(reversed*10)+(n % 10);
		n = 10;
	}
	return reversed;
}
int main()
{
	int num;
	printf("enter the number:");
	scanf("%d",&num);
	printf("reversed number:%d\n",reversenumber(num));
	return 0;
}
