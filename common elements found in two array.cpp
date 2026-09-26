#include<stdio.h>
int main()
{
	int n,m,i,j;
	printf("Enter 1st arrray size and elements:");
	scanf("%d",&m);
	int a[m];
	for(i=0;i<m;i++)
	{
		scanf("%d",&a[i]);
	}
		printf("Enter 2nd arrray size and elements:");
		scanf("%d",&n);
	int b[n];
	for(j=0;j<n;j++)
	{
		scanf("%d",&b[j]);
	}
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(a[i]==b[j])
			{
				printf("We found the common elements in two array %d,%d and the position is %d,%d\n",a[i],b[j],i+1,j+1);
			}
		}
	}
	return 0;
}
