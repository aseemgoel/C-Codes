#include<stdio.h>
#define N 5
void fill(int[],int);
void display(int[],int);
int main()
{
	int a[N],s,loc;
	fill(a,N);
	printf("\nElements Are-");
	display(a,N);
	printf("\nEnter The Element To Searh: ");
	scanf("%d",&s);
	loc=search(a,N,s);
	if(loc==-1)
	{
		printf("\nElement Not Found");
	}
	else
	{
		printf("\nElement Is Found At %d location",(loc+1));
	}
	
}

void fill(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("Enter %d Element:",i+1);
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
int search(int a[],int n,int item)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]==item)
		return (i);
	}
	return(-1);
}
