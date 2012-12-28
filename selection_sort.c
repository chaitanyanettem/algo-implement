#include<stdio.h>

int min(int a[],int k,int n)
{
	int location,j,min;
	min=a[k];
	location=k;
	for(j=k+1;j<=n-1;j++)
	{
		if(min > a[j])
		{
			min=a[j];
			location=j;
		}
	}
	return location;
}

void main()
{
	int i,a[20],n,k,position=0,temp;
	printf("\n Enter the number of elemnts : ");
	scanf("%d",&n);
	printf("\n Enter the elements of the array :\n");
	for(i=0;i<n;i++)
	scanf("%d",&a[i]);
	for(k=0;k<n;k++)
	{
		position=min(a,k,n);
		temp=a[k];
		a[k]=a[position];
		a[position]=temp;
	}
	printf("\n The sorted array is \n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
