#include<stdio.h>
#include<conio.h>
main()
{
  int a,n;
  clrscr();
  printf("Enter the N:");
  scanf("%d",&n);
  printf("Even numbers from n to %d:\n",n);
  for(n=10;n>=1;n--)
  {
     if(n%2==0)
	printf("%d ",n);
  }
  getch();
}

