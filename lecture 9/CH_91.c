#include<stdio.h>
main()
{
	int i;
	char pass[1];
	printf("Enter your password :");
	for(i=0;i<1;i++)
	{
		scanf("%c",&pass[i]);
	}
	for(i=0;i<1;i++)
	{
	      if(pass[i]>=65 && pass[i]<=90)
	        {
		      pass[i]=pass[i]+32;
		      printf("%c",pass[i]);
		   }
	}
}
