#include<stdio.h>
void main()
{
	int a[100],n,i,j,min,temp;
	printf("enter the number of integers\n");
	scanf("%d",&n);
	printf("enter the values\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<=n-2;i++)
	{
		for(j=0;j<=n-2-i;j++)
		{
			if(a[j+1]<a[j])
			{
				temp=a[j];
				a[j]=a[j+1];
				a[j+1]=temp;
			}
		}
	}
	printf("the sorted elements are:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i] );
	}
}