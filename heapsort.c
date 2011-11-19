#include<stdio.h>

int heapsize;

void heapify(int a[],int i)
{
	int l=2*i+1,r=2*i+2,largest,temp;
	if(l<heapsize && a[l]>a[i])
		largest=l;
	else
		largest=i;
	if(r<heapsize && a[r]>a[largest])
		largest=r;
	if(largest!=i)
	{
		temp=a[i];
		a[i]=a[largest];
		a[largest]=temp;
		heapify(a,largest);
	}
}

void buildheap(int a[],int length)
{
	int i;	
	heapsize=length;	
	for(i=length/2;i>=0;i--)
		heapify(a,i);
}

void heapsort(int a[],int length)
{
	int i,temp;	
	buildheap(a,length);
	for(i=length-1;i>=1;i--)
	{
		temp=a[0];
		a[0]=a[i];
		a[i]=temp;
		heapsize--;			
		heapify(a,0);	
	}
}

void main()
{
	int a[20],i,length;
	printf("ENTER THE SIZE OF YOUR ARRAY:");
	scanf("%d",&length);
	printf("ENTER THE ARRAY ELEMENTS: \n");
	for(i=0;i<length;i++)
		scanf("%d",&a[i]);
	heapsort(a,length);
	printf("THE SORTED ARRAY IS:");
	for(i=0;i<length;i++)
		printf("%d \t",a[i]);
}
