#include<stdio.h>
int main()
{
	int a[3][3],b[3][3],i,j,k,c,d,e;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter Element In [%d][%d]: ",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			b[i][j]=0;
		}
	}
	
	printf("The Matrix Is: ");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%5d",a[i][j]);
		}
	}
	for(k=0;k<3;k++)
	{
	c=a[0][k];
	a[0][k]=b[2][k];
	b[2][k]=c;
	
	d=a[1][k];
	a[1][k]=b[0][k];
	b[0][k]=d;
	
	e=a[2][k];
	a[2][k]=b[1][k];
	b[1][k]=e;
	}
	
	printf("\nMatrix After Interchanging Is: ");
	for(i=0;i<3;i++)
	{
		printf("\n");
		for(j=0;j<3;j++)
		{
			printf("%5d",b[i][j]);
		}
	}
}
