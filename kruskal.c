#include<stdio.h>

void kruskal(int w[10][10],int n)
{
	int a,b,u,v,i,parent[10],j;
	int ne=0,min,sum=0;
	for(i=1;i<=n;i++)
		parent[i]=0;
	while(ne<n-1)
	{
		min=999;
		for(i=1;i<=n;i++)
			for(j=1;j<=n;j++)
				if(w[i][j]<min)
				{
					u=a=i;
					v=b=j;
					min=w[i][j];
				}
		while(parent[u]!=0)
			u=parent[u];
		while(parent[v]!=0)
			v=parent[v];
		if(u!=v)
		{
			ne++;
			sum+=min;
			parent[v]=u;
			printf("%d--->%d=%d",a,b,min);
		}
		w[a][b]=w[b][a]=999;
	}
	printf("mincost=%d",sum);
}

void main()
{
	int i,j,w[10][10],n;
	printf("ENTER N:");
	scanf("%d",&n);
	printf("ENTER WEIGHT MATRIX:");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&w[i][j]);
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			if(w[i][j]==0)
				w[i][j]=999;
	kruskal(w,n);
}
