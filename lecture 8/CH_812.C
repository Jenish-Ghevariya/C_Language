#include<stdio.h>

main() 
{
   int a[5];
   int n,i,b=0;
   for(i=1;i<=5;i++)
   {
   	  printf("Enter the element : ");
   	  scanf("%d ",&a[i]);
   }
   for(i=1;i<=5;i++)
   {
   	  printf("%d ",a[i]);
   	  b++;
   }
   printf(" The length of array : %d ",b);
}

