#include<stdio.h>
main()
{
	int i,j,n;
	int a[n],b[n],c[n];
	printf("Enter the velue of a : ");
	scanf("%d",&n);
	for(i=0;i<=n;i++)
	{
		for(j=0;j<=n;j++)
		{
		printf("Enter the elements : ");
		scanf("%d",&a[i][j]);
	     } 	
	}
	for(i=0;i<=n;i++)
	{  
	    for(j=0;j<=n;j++)
	    {
		printf("Enter the elements : ");
		scanf("%d",&b[i][j]);
	    }	
	}
	for(i=0;i<=n;i++)
	{
	   for(j=0;j<=n;j++)
	   {
	     c[i][j]=a[i][j]+b[i][j];
	     printf ("%d ",c[i][j]);
       }	   
	}
	printf("\n");
}
