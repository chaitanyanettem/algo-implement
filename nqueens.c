/*Solution to the classic N-Queens problem using backtracking.*/

#include <stdio.h>
#include <stdlib.h>
#define MAX 50

int check(int c[], int r)
{
	int i;
	for (i=0; i<r; i++)
		if (c[i]==c[r] || (abs(c[i] - c[r]) == abs(i - r)))
			return 0;
	return 1;
}

void display(int c[], int n)
{
	int i, j;
	char cb[10][10];
	for(i=0; i<n; i++)
		for (j=0; j<n; j++)
			cb[i][j]= ‘-‘;
	for(i=0; i<n; i++)
		cb[i][c[i]]= ‘Q’;
	for(i=0; i<n; i++)
	{
		for(j=0; j<n; j++)
			printf(“%c “,cb[i][j]);
		printf(“\n”);
	}
}

void nqueens(int n)
{
	int r;
	int c[MAX];
	c[0] = -1;
	r = 0;
	while(r >= 0)
	{
		c[r]++; 
		while (c[r]<n && !check(c, r))
			c[r]++;
		if (c[r] < n)
		{
			if (r == n - 1)
			{
				display(c,n);
				printf(“\n\n”);
			}
			else
			{
				r++;
				c[r] = -1;
			}
		}
		else
			r--;
	}
}

void main()
{
	int n;
	printf ("\nHow many queens exist? ");
	scanf("%d",&n);
	nqueens(n);
}
