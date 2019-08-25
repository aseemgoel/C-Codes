#include<stdio.h>
#include<conio.h>
#define N 5
void fill(int[],int);
void display(int[],int);
void sort(int[],int);
int main()
{
	int a[N];
	fill(a,N);
	
	printf("Befor Sorting-");
	display(a,N);
	sort(a,N);
	printf("After Sorting-");
	display(a,N);
}

void fill(int a[],int N)
{
	int i;
	for(i=0,i<N,i++)
	{
		printf("Enter %d Element:",i+1);
		scanf("%d",&a[i]);	
	}
}

void display(int a[],int N)
{
	int i;
	printf("\n");
	for(i=0;i<N,i++)
	{
		printf("%5d",a[i]);
	}
}

void sort(int a[],int N)
{
	int i,j,t;
	for(i=0;i<N;i++)
	{
		for(j=i+1;j<N;j++)
		{
			if(a[i]>a[j])
			{
				t=a[i];
				a[i]=a[j];
				a[j]=t;
			}
		}
	}
}
