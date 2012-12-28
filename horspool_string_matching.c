/* Algorithm for substring match*/

#include<stdio.h>
#include<string.h>

#define MAX 256
int t[MAX];

void shift_table(char pattern[])
{
	int i,j,m;
	m=strlen(pattern);
	for(i=0;i<MAX;i++)
		t[i]=m;
	for(j=0;j<m-1;j++)
		t[pattern[j]]=m-1-j;
}

int horspool(char source[],char pattern[])
{
	int i,j,k,m,n;
	n=strlen(source);
	m=strlen(pattern);
	i=m-1;
	while(i<n)
	{ 
		k=0;
		while((k<m) && (pattern[m-1-k]==source[i-k]))
			k++;
		if(k==m)
			return (i-m+1);
		else
			i=i+t[source[i]];
	}
	return -1;
}

void main()
{
	char source[100],pattern[10];
	int pos;
	printf("\n Enter the main source string\n");
	gets(source);
	printf("\n Enter the pattern to be searched\n");
	gets(pattern);
	shift_table(pattern);
	pos=horspool(source,pattern);
	if(pos>=0)
	printf("\n Pattern found at %d position.",pos+1);
	else
	printf("\n Pattern match failed.");
}
