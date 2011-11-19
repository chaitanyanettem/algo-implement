#include<stdio.h>

int partition(int a[],int p,int r)
{
	int i=p-1,x=a[r],temp,j;
	for(j=p;j<=r-1;j++)
	{	
		if(a[j]<=x)
		{
			i++;
			temp=a[j];
			a[j]=a[i];
			a[i]=temp;
		}
	}
	temp=a[i+1];
	a[i+1]=a[r];
	a[r]=temp;
	return (i+1);
}

void quicksort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		q=partition(a,p,r);
		quicksort(a,p,q-1);
		quicksort(a,q+1,r);
	}
}

void main()
{
	int i,n,a[20];
	printf("ENTER THE SIZE OF YOUR ARRAY:");
	scanf("%d",&n);
	printf("\nENTER THE ELEMENTS OF ARRAY:");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	quicksort(a,0,n-1);
	printf("\nTHE SORTED ARRAY IS:\n");
	for(i=0;i<n;i++)
		printf("%d\t",a[i]);
}
