#include<stdio.h>
main()
{
	int i;
	char pass[10];
	printf("Enter your password :");
	for(i=0;i<10;i++)
	{
		scanf("%s",&pass[i]);
	}
	for(i=0;i<10;i++)
	{
	      if(pass[i]>=97 && pass[i]<=122)
	        {
		      pass[i]=pass[i]-32;
		      printf("%s",pass[i]);
		   }
	}
}
