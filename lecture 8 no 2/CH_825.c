#include<stdio.h>

main()
{
	int  n,b,sum=0;
	printf("enter the value of n:");
	scanf("%d",&n);
	int a[n][n],i,j;
	printf("Enter the elements of array:");
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
		    {
    		  
		       scanf("%d ",&a[i][j]);
		    }
	}
	printf("Enter the number of row to sum :");
	scanf("%d",&b);
     for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(i==b-1)
		    {
		    	  printf("%d ",a[i][j]);
		    	  sum+=a[i][j];
		    }
          }
    }
    printf("The sum of array  %d ",sum);
}
