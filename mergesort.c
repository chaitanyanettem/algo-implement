#include<stdio.h>

void merge(int a[],int p,int q,int r)
{
	int b[20];
	int i,k,j;
	i=k=p;
	j=q+1;
	while(i<=q && j<=r)
	{
		if(a[i]<a[j])
			b[k++]=a[i++];
		else
			b[k++]=a[j++];
	}
	while(i<=q)
		b[k++]=a[i++];
	while(j<=r)
		b[k++]=a[j++];
	for(i=p;i<=r;i++)
		a[i]=b[i];
}

void mergesort(int a[],int p,int r)
{
	int q;
	if(p<r)
	{
		int q=(p+r)/2;
		mergesort(a,p,q);
		mergesort(a,q+1,r);
		merge(a,p,q,r);
	}
}

void main()
{
	int a[20],i,n;
	printf("\nENTER ARRAY SIZE:");
	scanf("%d",&n);
	printf("ENTER THE ARRAY ELEMENTS");
	for(i=0;i<n;i++)
		scanf("%d",&a[i]);
	mergesort(a,0,n-1);
	printf("THE SORTED ARRAY IS:\n");
	for(i=0;i<n;i++)
		printf("%d\n",a[i]);
}
