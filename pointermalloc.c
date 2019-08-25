#include<stdio.h>
#include<stdlib.h>
#include<alloc.h>
int main()
{
	int *p,n,i;
	printf("Enter The Numbers To Be Entered: ");
	scanf("%d",&n);
	p=(int *)malloc(n*sizeof(int));
	if(p==NULL)
	{
		printf("Memory Not Available\n");
		exit(1);
	}
	for(i=0;i<n;i++)
	{
		printf("Enter An Integer: ");
		scanf("%d",p+i);
	}
	for(i=0;i<n;i++)
	{
		printf("%d\t",*(p+i));
	}
	free(p);
}
