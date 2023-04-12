#include<stdio.h>
#include<conio.h>
main()
{
   int a,n;
   clrscr();
   a=1;
   printf("Enter the value of n:");
   scanf("%d",&n);
   printf("odd numbers from 1 to %d:\n",a);
   for(a=1;a<=n;a++)
   {
     if(a%2!=0)
	   printf("%d",a);
   }
   getch();
}