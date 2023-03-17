#include<stdio.h>
main()
{
	int r,c,i,j;
	
	printf("enter the number of row :");
	scanf("%d",&r);
	
	printf("enter the number of column :");
	scanf("%d",&c);
	int a[r][c],b[r][c],d[r][c];
	
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the element a[%d][%d] :",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	printf("\n-----------------------------------------\n");
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
			printf("enter the element b[%d][%d] :",i,j);
			scanf("%d",&b[i][j]);
			d[i][j]=a[i][j]+b[i][j];
		}
	}
	printf("\n-----------------------------------------\n");
	printf("addition of the arraay is : ");
	printf("\n");
		for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
	
			printf("%d ",d[i][j]);
			
		}
		printf("\n");
	
	}

	
}
