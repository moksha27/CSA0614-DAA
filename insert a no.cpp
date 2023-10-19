#include<stdio.h>
int main()
{
	int n,pos,d,i,m;
	int a[10];
	printf("no of elements:");
	scanf("%d",&n);
	printf("enter element one by one:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&n);
	}
		printf("enter the elements to insert:");
		scanf("%d",&d);
		printf("enter the position:");
		scanf("%d",&pos);
		pos=pos-2;
		m=n-1;
		for(i=m;i>pos;i--)
		{
			a[i+1]=a[i];
		}
		a[i]=d;
}
