#include<stdio.h>

int a[10][10],n;
void bfs(int s)
{
	int i,j,f=0,r=-1;
	int v[10],d[10],q[10];
	for(i=1;i<=n;i++)
	{
		v[i]=0;
		d[i]=0;
	}
	v[s]=1;
	d[s]=0;
	q[++r]=s;
	while(f<=r)
	{
		i=q[f++];
		for(j=1;j<=n;j++)
		{
			if(a[i][j]==1 && v[j]!=1)
			{
				d[j]=d[i]+1;
				v[j]=1;
				q[++r]=j;
				printf("%d--->%d=%d",s,j,d[j]);
			}
		}
	}
}

void main()
{
	int s,i,j;
	printf("\nenter the no of vertex::");
	scanf("%d",&n);
        printf("\nenter the adjacency matrix");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	printf("SRC:");
	scanf("%d",&s);
	bfs(s);
}
	


