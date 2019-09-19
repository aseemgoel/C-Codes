#include<stdio.h>
#define R 3
int main()
{
	int a[R][R],i,j,sum;
	//code to fill matrix
	for(i=0;i<R;i++)
	{
		for(j=0;j<R;j++)
		{
			printf("Enter Element %d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	sum=0;
	for(i=0;i<R;i++)
	{
		for(j=0;j<R;j++)
		{
			if(i+j==R-1)
			{
				sum=sum+a[i][j];
				break;
			}
		}
	}
	//code to display
	for(i=0;i<R;i++)
	{
		printf("\n");
		for(j=0;j<R;j++)
		{
			printf("%5d",a[i][j]);
		}
	}
	printf("\nSum Of Off Diagonal Elements: %d",sum);
}

