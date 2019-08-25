#include<stdio.h>
#include<conio.h>
const int N=5;
void fill(int[],int);
void display(int[],int);
void mergesort(int[],int,int);
void mergingsortedsubarrays(int[],int,int,int,int);
int main()
{
	int a[N];
	fill(a,N);
	printf("Befor Sorting-");
	display(a,N);
	mergesort(a,0,N-1);
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

void mergesort(int a[],int beg,int end)
{
	int mid;
	if(beg<end)
	{
		mid=(beg+end)/2;
		mergesort(a,beg,mid);
		mergesort(a,mid+1,end);
		mergingsortedsubarrays(a,beg,mid,mid+1,end);
	}
}

void mergingsortedsubarrays(int a[N],int lb,int lr,int rb,int rr)
{
	int na,nb,nc,k,c[N];
	na=lb;
	nb=rb;
	nc=lb;
	while((na<=lr)&&(nb<=rr))
	{
		if(a[na]<a[nb])
		{
			c[nc]=a[na++];
		}
		else
		{
			c[nc]=a[nb++];
		}
		nc++;
	}
	if(na>lr)
	{
		while(nb<=rr)
		{
			c[nc++]=a[nb++];
		}
	}
	else
	{
		while(na<=lr)
		{
			c[nc++]=a[na++];
		}
	}
	for(k=lb;k<=rr;k++)
	{
		a[k]=c[k];
	}
}
