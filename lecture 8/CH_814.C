#include<stdio.h>
main()
{
	int i,n;
	int a[n],b[n],c[n];
	printf("Enter the velue of a : ");
	scanf(" %d ",&n);
	for(i=0;i<=n;i++)
	{
		printf("Enter the elements : ");
		scanf("%d ",&a[i]);
	}
	for(i=0;i<=n;i++)
	{
		printf("Enter the elements : ");
		scanf("%d ",&b[i]);
	}
	for(i=0;i<=n;i++)
	{
	   c[i]=a[i]+b[i];
	   printf ("%d ",c[i]);
	}
	printf("\n");
}
