#include<stdio.h>
#include<string.h>
struct employee
{
	int id;
	char name[100];
	int age;
	char role[100];
	char city[100];
	int experience;
	char company_name[100]; 
}s[100];
int main()
{
	  int i,n;
    printf("Enter no. of structure :");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    	printf("Enter your id : "); 
			scanf("%d",&s[i].id);
    	printf("Enter your name : "); 
			fflush(stdin);
			gets(s[i].name);
    	printf("Enter your age : "); 
			scanf("%d",&s[i].age);
    	printf("Enter your role : "); 
			fflush(stdin);
			gets(s[i].role);
      printf("Enter your city : "); 
			fflush(stdin);
			gets(s[i].city);
    	printf("Enter your experinece : "); 
			scanf("%d",&s[i].experience);
    	printf("Enter your company_name : "); 
			fflush(stdin);
			gets(s[i].company_name);
		}
		for(i=0;i<n;i++)
		{
			printf("id:%d\n",s[i].id);
			printf("name:%s\n",s[i].name);
			printf("age:%d\n",s[i].age);
			printf("role:%s\n",s[i].role);
			printf("city:%s\n",s[i].city);
			printf("experience:%d\n",s[i].experience);
			printf("company_name: %s\n",s[i].company_name);
		}
}
