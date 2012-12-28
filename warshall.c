/*Computing the transitive closure of a
directed graph using Warshalls' Algorithm*/

#include<stdio.h>

void warshall(int p[10][10],int n)
{
	int i,j,k;
	for (k=1;k<=n;k++)
		for (i=1;i<=n;i++)
			for (j=1;j<=n;j++)
				p[i][j]=p[i][j] || (p[i][k] && p[k][j]);
}
void main()
{
	int a[10][10],i,j,n;
	printf("\n Enter the number of vertices : ");
	scanf("%d",&n);
	printf("\n Enter the adjacency matrix \n");
	for (i=1;i<=n;i++)
		for (j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	warshall(a,n);
	printf("\n The resultant Path matrix is \n");
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			printf("%d ",a[i][j]);
		printf("\n");
	}
}
