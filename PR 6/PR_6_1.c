#include<stdio.h>
main()
{
	char str[50];
	int i,j,n,count=0;
	printf("Enter size of string:");
	gets(str);
	for(j=0;str[j];j++);
	n=j;
	printf("enter the frequency character in string :\n");
	for(i=0;i<n;i++)
	{
		count=1;
		if(str[i])
		{
			for(j=i+1;j<n;j++)
			{
				if(str[i]==str[j])
				{
					count++;
					str[j]=NULL;
				}
			}
			printf("%c  :%d\n",str[i],count);
		}
	}
}
