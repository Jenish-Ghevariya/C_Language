#include<stdio.h>

main()
{
	int r,c,i,j;
	printf("enter the size of row:");
	scanf("%d",&r);
	printf("enter the size of column:");
	scanf("%d",c);
	int a[i][j];
	printf("enter the elemnts of array:");

	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("%d",&a[i][j]);
			r==c;
			c==r;
		}
	}
}
