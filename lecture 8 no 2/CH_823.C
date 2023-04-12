#include<stdio.h>

main()
{
    int i,j,n;
    float a[10][10], sum = 0.0, avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) 
	{
		for(j=0;j<n;j++)
		 {
		     printf("Enter number :\n ", n);
             scanf("%f",&a[i][j]);
             sum +=a[i][j];
         }
    }
	avg=sum/n;
    printf("The average of the array is: %.2f", avg);

}

