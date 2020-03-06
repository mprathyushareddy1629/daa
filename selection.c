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
		min=i;
		for(j=i+1;j<=n-1;j++)
		{
			if (a[j]<a[min])
			{
				min=j;
			}
		
		}

			temp=a[i];
			a[i]=a[min];
			a[min]=temp;
	}
	
	printf("the sorted elements are:\n");
	for(i=0;i<=n-1;i++)
	{
	
	      printf("%d\n",a[i]);
	    	
	}
}