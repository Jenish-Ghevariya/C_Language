#include<stdio.h>
#include<conio.h>
main()
{
  char i,j,num=1;
  clrscr();
  for(i=1;i<=5;i++)
  {
   for(j=1;j<=i;j++)
   {
     printf("%c ",'A'+num-1);
     num++;
   }
   printf("\n");
  }
  getch();
}