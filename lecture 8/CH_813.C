#include<stdio.h>

main()
{
    int i,n;
    float a[100], sum = 0.0, avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    for(i=0;i<n;i++) 
	{
		printf("Enter number :\n ", n);
        scanf("%f",&a[i]);
        sum +=a[i];
    }
	avg=sum/n;
    printf("The average of the array is: %.2f", avg);

}

