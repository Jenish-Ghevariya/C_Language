#include<stdio.h>
int add(int a,int b)
{
	return a+b;
}
int sub(int a,int b)
{
	return a-b;
} 
int mul(int a,int b)
{
	return a*b;
}
int div(int a,int b)
{
	return a/b;
}
int mod(int a,int b)
{
	return a%b;
}
main()
{
	int a,b,n;
	printf("Press 1 for add :\n");
	printf("Press 2 for sub :\n");
	printf("Press 3 for mul :\n");
	printf("Press 4 for div :\n");
	printf("Press 5 for mod :\n");
	printf("Press 0 for exist :\n");
	printf("Enter your choice..");
	scanf("%d",&n);
	switch(n)
	{
		case 1:
			printf("Enter a:");
	          scanf("%d",&a);
	          printf("Enter the b:");
	          scanf("%d",&b);
			printf("%d",add(a,b));
			main();
		break ;
		case 2:
			printf("Enter a:");
	          scanf("%d",&a);
	          printf("Enter b:");
	          scanf("%d",&b);
			printf("%d\n",sub(a,b));
			main();
		break;
		case 3:
			printf("Enter a:");
	          scanf("%d",&a);
	          printf("Enter b:");
	          scanf("%d",&b);
			printf("%d\n",mul(a,b));
			main();
		break ;
		case 4:
			 printf("Enter a:");
	           scanf("%d",&a);
	           printf("Enter b:");
	           scanf("%d",&b);
			 printf("%d\n",div(a,b));
			 main();
		break ;
		case 5:
			printf("Enter a:");
	          scanf("%d",&a);
	          printf("Enter b:");
	          scanf("%d",&b);
			printf("%d\n",mod(a,b));
			main();
		break ;
		case 0:
		break;
	     default:
		  printf("Invalide choice..");
     }
}
