#include<stdio.h>
void main()
{
	int a[100],n,i,j,v;
	printf("enter the number of integers\n");
	scanf("%d",&n);
	printf("enter the values\n");
	for(i=0;i<=n-1;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=1;i<=n-1;i++)
	{
      v=a[i];
      j=i-1;
      while(j>=0 && a[j]>v)
      {
      	a[j+1]=a[j];
      	j=j-1;
      }
      a[j+1]=v;
	}
	printf("the sorted elements are:\n");
	for(i=0;i<=n-1;i++)
	{
		printf("%d\n",a[i] );
	}
}
