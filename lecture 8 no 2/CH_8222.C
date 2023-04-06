/* 1 2 3 4 5 5 4 3 2 1
   1 2 3 4     4 3 2 1
   1 2 3         3 2 1
   1 2             2 1
   1                 1
   1                 1
   1 2             2 1
   1 2 3         3 2 1
   1 2 3 4     4 3 2 1
   1 2 3 4 5 5 4 3 2 1
*/
#include<stdio.h>
#include<conio.h>
main()
{
    int i,j,s;
    clrscr();
    for(i=5;i>=1;i--)
    {
	for(j=1;j<=i;j++)
	{
	    printf("%d ",j);
	}
	for(s=1;s<=5-i;s++)
	{
	   printf("    ");
	}
	for(j=i;j>=1;j--)
	{
	   printf("%d ",j);
	}
	printf("\n");
    }
    for(i=1;i<=5;i++)
    {
       for(j=1;j<=i;j++)
       {
	  printf("%d ",j);
       }
       for(s=4;s>=i;s--)
       {
	 printf("    ");
       }
       for(j=i;j>=1;j--)
       {
	  printf("%d ",j);
       }
       printf("\n");
    }
    getch();
}