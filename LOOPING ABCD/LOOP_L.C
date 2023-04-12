/* *
   *
   *
   *
   *
   *
   * * * *
*/
#include<stdio.h>
#include<conio.h>
main()
{
   int i;
   clrscr();
   for(i=1;i<=7;i++)
   {
    if(i==1 || i==2 || i==3 || i==4 || i==5 || i==6)
    {
     printf("   *");
    }
    if(i==7)
    {
     printf("   * * * *");
    }
   printf("\n");
   }
   getch();
}