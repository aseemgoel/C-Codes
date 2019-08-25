#include<stdio.h>
#define N 5
#define M 4
void fill(int[],int);
void display(int[],int);
void merge(int[],int[],int[],int,int);
int main()
{
	int a[N],b[M],c[M+N];
	printf("\nFill 1st Array");
	fill(a,N);
	printf("\nFill 2nd Array");
	fill(b,M);
	printf("\nElements Of 1st Array Are-");
	display(a,N);
	printf("\nElements Of 2nd Array Are-");
	display(b,M);
	merge(a,b,c,N,M);
	printf("\nElements Of Merge Array Are-");
	display(c,N+M);
}

void fill(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("\nEnter %d Element:",i+1);
		scanf("%d",&a[i]);	
	}
}

void display(int a[],int n)
{
	int i;
	printf("\n");
	for(i=0;i<n;i++)
	{
		printf("%5d",a[i]);
	}
}

void merge(int a[],int b[],int c[],int n,int m)
{
	int i,j,k;
	i=0;
	j=0;
	k=0;
	while(i<n&&j<M)
	{
		if(a[i]<N&&b[j]<M)
		c[k]=a[i++];
		else
		c[k]=b[j++];
		k++;
	}
	if(i<N)
	{
		while(i<N)
		{
			c[k++]=a[i++];
		}
	}
	else
	{
		while(j<N)
		{
			c[k++]=b[j++];
		}
	}
}
		

