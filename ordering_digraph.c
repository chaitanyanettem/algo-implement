/*Identify the topological ordering in a given digraph*/

#include<stdio.h>

int temp[10],k=0;
void topo(int n,int indegree[10],int a[10][10])
{ 
	int i,j;
	for(i=1;i<=n;i++)
	{
		if(indegree[i]==0)
		{
			indegree[i]=-1;
			temp[++k]=i;
			for(j=1;j<=n;j++)
			{
				if(a[i][j]==1 && indegree[j]!=-1)
				indegree[j]--;
			}
			i=0;
		}
	}
}

void main()
{
	int i,j,n,indegree[10],a[10][10];
	printf("Enter the number of vertices :");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
		indegree[i]=0;
	printf("\n Enter the adjacency matrix\n");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
		{
			scanf("%d", &a[i][j]);
			if(a[i][j]==1)
				indegree[j]++;
		}
	topo(n,indegree,a);
	if(k!=n)
		printf("\n Topological ordering is not posssible\n");
	else
	{
		printf("\n The topoligical ordering is :\n");
		for(i=1;i<=k;i++)
		printf("%d\t",temp[i]);
	}
}

