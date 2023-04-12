#include<stdio.h>

main()
{
	int  n,b,sum=0;
	printf("enter the elements of array:");
	scanf("%d",&n);
	int a[n][n],i,j;
	for(i=0;i<n;i++)
	{
	   for(j=0;j<n;j++)
		    {
    		  
		       scanf("%d ",&a[i][j]);
		    }
	}
	printf("Enter the array:");
	scanf("%d",&b);
     for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
		    if(i==b-1)
		    {
		    	  printf("Enter the rows :");
		    	  sum+=a[i][j];
		    }

	     }

	}
	
}
