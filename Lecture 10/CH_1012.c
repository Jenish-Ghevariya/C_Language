#include<stdio.h>
divisible();
main()
{
	divisible();
}
divisible()
{
	  int a;
		printf("Enter the number of a:");
	  scanf("%d",&a);
	  if((a%5==0) && (a%3==0))
	  {
	  	printf("enter number is divisible 3 and 5: ");
		}
		else
		{
			printf("enter number is not divisible 3 and 5:");
		}
}
