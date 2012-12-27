#include<stdio.h>
int count,n,a[10][10],v[10];
void dfs(int s)
{
        int i;
	v[s]=1;
        count++;
        for(i=1;i<=n;i++)
        {
                if(v[i]!=1 && a[s][i]==1)
		{
			printf("%d--->%d",s,i);
			dfs(i);
		}
	}
}

void main()
{
	int s,i,j;
	count=0;
        printf("\nenter the no of vertex::");
	scanf("%d",&n);
	printf("\nenter the adjacency matrix");
	for(i=1;i<=n;i++)
		for(j=1;j<=n;j++)
			scanf("%d",&a[i][j]);
	printf("SRC:");
	       scanf("%d",&s);
	for(i=1;i<=n;i++)
		v[i]=0;
	dfs(s);
	if(count==n)
		printf("CONNECTED");
	else
		printf("NOT CONNECTED");
}
