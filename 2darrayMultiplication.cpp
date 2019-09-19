#include<stdio.h>
#include<conio.h>
#define N 10
int main()
{
	int a[N][N],b[N][N],c[N][N],r1,c1,r2,c2,i,j,k;
	printf("Enter Row And Column For First Matrix: ");
	scanf("%d%d",&r1,&c1);
	printf("Enter Row And Column For Second Matrix: ");
	scanf("%d%d",&r2,&c2);
	if(c1!=r2)
	{
		printf("Multiplication Is Not Possible");
		return(0);
	}
	printf("\nEnter The Elements Of First Matrix");
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c1;j++)
		{
			printf("\nEnter Element %d%d: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\nEnter The Elements Of Second Matrix");
	for(i=0;i<r2;i++)
	{
		for(j=0;j<c2;j++)
		{
			printf("\nEnter Element %d%d: ",i,j);
			scanf("%d",&b[i][j]);
		}
	}
	for(i=0;i<r1;i++)
	{
		for(j=0;j<c2;j++)
		{
			c[i][j]=0;
			for(k=0;k<c1;k++)
			{
				c[i][j]=c[i][j]+a[i][k]*b[k][j];
			}
		}
	}
	
	printf("\nFirst Matrix Is-");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c1;j++)
		{
			printf("%5d",a[i][j]);
		}
	}
	printf("\nSecond Matrix Is:");
	for(i=0;i<r2;i++)
	{
		printf("\n");
		for(j=0;j<c2;j++)
		{
			printf("%5d",b[i][j]);
		}
	}
	printf("\nResult Is-");
	for(i=0;i<r1;i++)
	{
		printf("\n");
		for(j=0;j<c2;j++)
		{
			printf("%5d",c[i][j]);
		}
	}

	
}

