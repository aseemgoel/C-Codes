#include<stdio.h>
#include<conio.h>
const int N=5;
void fill(int[],int);
void display(int[],int);
void bubblesort(int[],int);
int main()
{
	int a[N];
	fill(a,N);
	printf("Before Sorting-");
	display(a,N);
	bubblesort(a,N);
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

void bubblesort(int a[],int N)
{
	int i,j,t;
	for(i=1;i<N;i++)
	{
		for(j=0;j<N-i;j++)
		{
			if(a[j]>a[j+1])
			{
				t=a[j];
				a[j]=a[j+1];
				a[j+1]=t;
			}
		}
	}
}
