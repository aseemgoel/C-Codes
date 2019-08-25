#include<stdio.h>
#include<conio.h>
const int N=5;
void fill(int[],int);
void display(int[],int);
void insertionsort(int[],int);
int main()
{
	int a[N];
	fill(a,N);
	printf("Befor Sorting-");
	display(a,N);
	insertionsort(a,N);
	printf("\nAfter Sorting-");
	display(a,N);
}

void fill(int a[],int N)
{
	int i;
	for(i=0;i<N;i++)
	{
		printf("Enter %d Element:",i+1);
		scanf("%d",&a[i]);	
	}
}

void display(int a[],int N)
{
	int i;
	printf("\n");
	for(i=0;i<N;i++)
	{
		printf("%5d",a[i]);
	}
}

void insertionsort(int a[],int N)
{
	int i,j,t;
	for(i=1;i<N;i++)
	{
		t=a[i];
		j=i-1;
		while(j>=0&&a[j]>t)
		{
			a[j+1]=a[j];
			j--;
		}
		a[j+1]=t;
	}
}
