#include<stdio.h>
#include<conio.h>
main()
{
   int a=0,n,sum=0;
   clrscr();
   printf("enter the n:");
   scanf("%d",&n);
   do
   {
    sum=sum+a;
    a++;
   }
   while(a<=n);
   printf("%d",sum,n);
   getch();
}