#include<stdio.h>
main()
{
	int i,n,a[i];
	printf("Enter the array:");
	scanf("%d",&n);
	printf("Enter the elements :");
	for(i=0;i<=n;i++)
	{
		scanf("%d",&a[i]);
	}
    for(i=0;i<=n;i++)
	{
	  if(n<=0)
	  { 
	     printf("negative elements :%d",a[i]);
	  }
	  else
	  {
	  	printf("positive elements :%d",a[i]);
	  }
	}
}
