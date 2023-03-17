#include<stdio.h>

main() {
	FILE *ptr;
	FILE *ptr1;
	ptr=fopen("demo.text","r");
	ptr1=fopen("demo3.text","a");
	int a;
	
	if(ptr==NULL && ptr1==NULL)
	{
		printf("You cannot open any file");
	}
	else
	{
		printf("You can open a file");
		fscanf(ptr,"%d",a);
		fprintf(ptr1,"%d",a);
	
	}
	
}
