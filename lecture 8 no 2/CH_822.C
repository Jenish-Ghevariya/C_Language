#include<stdio.h>

main() 
{
   int a[3][3];
   int n,i,j,c=0;
   for(i=0;i<3;i++)
   {
   	  for(j=0;j<3;j++)
   	  {
		
		  printf("Enter the elements : ");
   	      scanf("%d",&a[i][j]);
      }
   }
   for(i=0;i<3;i++)
   {
   	  for(j=0;j<3;j++)
   	  {
	     printf("%d ",a[i][j]);
   	     c++;
      }
   }
   printf(" The length of array : %d ",c);
}
