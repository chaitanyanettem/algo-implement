#include<stdio.h>

int c[10][10];
void dijkstra(int src,int n)
{
	int i,u,vis[20],d[20],ne,min;
	for(i=1;i<=n;i++)
	{
		vis[i]=0;
		d[i]=c[src][i];
	}
	vis[src]=1;
	d[src]=0;
	ne=1;
	while(ne<=n-1)
	{
		min=9999;
		for(i=1;i<=n;i++)
		{
			if(d[i]<min && vis[i]!=1)
			{
				min=d[i];
				u=i;
			}
		}
		vis[u]=1;
		for(i=1;i<=n;i++)
			if(d[u]+c[u][i]<d[i] && vis[i]!=1)
				d[i]=d[u]+c[u][i];
		ne++;
	}
	for(i=1;i<=n;i++)
		printf("\n%d--->%d=%d\n",src,i,d[i]);
}

void main()
{
	int i,n,j,src;
	printf("ENTER N:");
	scanf("%d",&n);
	printf("ENTER THE WEIGHT MATRIX:");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&c[i][j]);
	printf("ENTER SRC:");
	scanf("%d",&src);
	dijkstra(src,n);
}
