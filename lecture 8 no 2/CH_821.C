#include<stdio.h>
main()
{
	int  j,i,r,c;
	printf("enter the size rowes:");
	scanf("%d",&r);
	printf("enter the size columns :");
	scanf("%d",&c);
	int a[r][c];
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("enter the value of array a[%d][%d]:",i,j);
			 scanf("%d",&a[i][j]);
		}
	}
	for(i=0;i<r;i++)
	{
		for(j=0;j<c;j++)
		{
		    printf("%d ",a[i][j]);
		}
		printf("\n");
	}
	
}
