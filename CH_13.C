#include<stdio.h>

main()
{
   FILE *fp;
   char data[100];
   fp=fopen("data.txt","w");

   printf("Enter any data : ");
   gets(data);

   fputs(data,fp);
   fputs("\n",fp);

   fclose(fp);

   fp = fopen("data.txt","r");

   while(fgets(data,9,fp)!=NULL)
   {
     printf("%s",data);
   }

   fclose(fp);

   fp=fopen("data2.txt","w");

   printf("Enter any data : ");
   gets(data);

   fputs(data,fp);
   fputs("\n",fp);

   fclose(fp);

   fp = fopen("data2.txt","r");

   while(fgets(data,9,fp)!=NULL)
   {
     printf("%s",data);
   }

   fclose(fp);
}


