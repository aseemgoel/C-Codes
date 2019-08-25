#include<stdio.h>
#include<conio.h>
const int N=5;
typedef enum{false,true} boolean;
void fill(int[],int);
void display(int[],int);
void quicksort(int[],int,int);
int partitionarray(int[],int,int);
int main()
{
	int a[N];
	fill(a,N);
	printf("Before Sorting-");
	display(a,N);
	quicksort(a,0,N-1);
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

void quicksort(int a[],int lb,int ub)
{
	int loc;
	if(lb<ub)
	{
		loc=partitionarray(a,lb,ub);
		quicksort(a,lb,loc-1);
		quicksort(a,loc+1,ub);
	}
}

int partitionarray(int a[],int beg,int end)
{
	int left,right,temp,loc;
	boolean done;
	loc=left=beg;
	right=end;
	done=false;
	while(!done)
	{
		while((a[loc]<=a[right])&&(loc!=right))
		{
			right--;
		}
		if(loc==right)
		{
			done=true;
		}
		else if(a[loc]>a[right])
		{
			temp=a[loc];
			a[loc]=a[right];
			a[right]=temp;
			loc=right;
		}
		if(!done)
		{
			while((a[loc]>=a[left])&&(loc!=left))
			{
				left++;
			}
			if(loc==left)
			{
				done=true;
			}
			else if(a[loc]<a[left])
			{
				temp=a[loc];
				a[loc]=a[left];
				a[left]=temp;
				loc=left;
			}
		}
	}
	return (loc);
}
