#include<stdio.h>

main() {
	int n,i,j,largest,s_largest;
	printf("Enter the size of row : ");
	scanf("%d",&n);

	int count=0;
	int a[n],f[n];

	
	for(i=0;i<n;i++)
	{
			printf("Enter element a[%d] :",i);
			scanf("%d",&a[i]);
			f[i]=1;	
	}
	for(i=0;i<n;i++)
	{
		count=1;
		for(j=i+1;j<n;j++)
		{
			if(a[i]==a[j])
			{
				count++;
				f[j]=0;
			}
			if(f[i]!=0)
			{
				f[i]=count;
			}
		}
		
	}
	for(i=0;i<n;i++)
	{
		if(f[i]>0)
		{
			printf("%d : %d\n",a[i],f[i]);
		}
	}

}
