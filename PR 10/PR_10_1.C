#include<stdio.h>

main()
{
	FILE *fp;
	char data[100];
	fp=fopen("data.txt","w");
	printf("Enter any data: ");
	gets(data);
	fputs(data,fp);
	fputs("\n",fp);
	fclose(fp);
}
