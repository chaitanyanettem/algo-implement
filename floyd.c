/*Solution to all pairs shortest path problem 
using Floyd's Algorithm*/

#include<stdio.h>
#define INFINITY 999

int min(int a,int b)
{
	return a<b?a:b;
}

void floyd(int p[10][10],int n)
{
	int i,j,k;
	for (k=1;k<=n;k++)
	for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
	p[i][j]=min(p[i][j], p[i][k]+p[k][j]);
}

void main()
{
	int a[10][10],n,i,j;
	printf("\n Enter the number of vertices: ");
	scanf("%d",&n);
	printf("\n Enter the cost matrix 0 -self loop & 999 –for
	edge\n");
	for (i=1;i<=n;i++)
	for (j=1;j<=n;j++)
	scanf("%d",&a[i][j]);
	floyd(a,n);
	printf("\n Shortest path matrix\n");
	for (i=1;i<=n;i++)
	{
		for (j=1;j<=n;j++)
			printf("%d\t",a[i][j]);
		printf("\n");
	}
}
