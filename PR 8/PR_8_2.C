#include<stdio.h>
 
int main()
 {
 	 int i,j,p,q;
 	 printf("Enter the p: ");
 	 scanf("%d",&p);
 	 printf("Enter the q: ");
 	 scanf("%d",&q);
 	 int a[p][q];
 	 printf("Enter the 2d array of element :\n");
 	 for(i=0;i<p;i++)
 	 {
 	 	for(j=0;j<q;j++)
 	 	  {
 	 	       scanf("%d\n",&a[i][j]);	
 			}
	 }
	 for(i=0;i<p;i++)
 	 {
 	 	for(j=0;j<q;j++)
 	 	  {
 	 	       printf("%d\n",a[i][j]);	
 			}
 			printf("\n");
	 }
	 for(i=0;i<p;i++)
 	 {
 	 	for(j=0;j<q;j++)
 	 	  {
 	 	       printf("Cub => %d\n",a[i][j]*a[i][j] *a[i][j]);	
 			}
	 }
	 
 }
