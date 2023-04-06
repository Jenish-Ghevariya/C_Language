#include<stdio.h>
#include<conio.h>
main()
{
  char i,j;
  clrscr();
    for(i=1;i<=5;i++)
     {
	for(j=1;j<=i;j++)
	{
	  printf("%c ", 'A' + i - 1);
	}
	printf("\n");
     }
  getch();
}

