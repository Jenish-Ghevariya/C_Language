#include<stdio.h>
#include<conio.h>
main()
{
   int a=0,n,sum=0;
   clrscr();
   printf("enter the n:");
   scanf("%d",&n);
   while(a<=n)
   {
    sum=sum+a;
    a++;
   }
   printf("%d",sum,n);
   getch();
}