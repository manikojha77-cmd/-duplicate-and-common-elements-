#include<stdio.h>
int main()
{
	int n,i,j;
	printf("Enter arrray size and elements:");
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				printf("We found the common elements in a array %d,%d\n and the position is %d,%d",a[i],a[j],i+1,j+1);
				break;
			}
		}
	}
	return 0;
}
