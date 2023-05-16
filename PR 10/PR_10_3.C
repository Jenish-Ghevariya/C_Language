#include<stdio.h>

main()
{
   FILE *fp;
   char data[100],copy;
   fp=fopen("data.txt","a");
   printf("Enter any data : ");
   gets(data);
   copy=data[100];
   fputs(data,fp);
   fputs("\n",fp);
   fp= fopen("file.txt","w");
   fputs(data,fp);
   fclose(fp);
}


