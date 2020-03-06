#include<stdio.h>
void main()
{
	int a[100],n,i,j,v;
	printf("enter the number of integers\n");
	scanf("%d",&n);
	printf("enter the values\n");
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("enter the value you want to find");
	scanf("%d",&v);
	for(i=1;i<=n;i++)
	{
		if(v==a[i])
		{
			printf("the value is present at: %d",i);
		}
	}
}