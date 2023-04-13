#include<stdio.h>

main()
{
	int  i,j,r,c,sum=0;
	printf("enter the size rowes:");
	scanf("%d",&r);
	printf("enter the size columns:");
	scanf("%d",&c);
	int a[i][j];
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
		    if(i==j)
		    {
		    	printf("%d ",a[i][j]);
		    	sum+=a[i][j];
				}
				else
				{
					printf(" - ");
				}
	   }
		printf("\n");
	}
	printf("The sum of array %d",sum);
}
