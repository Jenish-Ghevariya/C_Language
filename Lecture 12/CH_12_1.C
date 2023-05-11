#include<stdio.h>
#include<string.h>
struct student 
{
	int id;
	char name[100];
	int age;
	char course[100];
	char city[100];
	int std;
	char school[100]; 
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
    	printf("Enter your course : "); 
			fflush(stdin);
			gets(s[i].course);
      printf("Enter your city : "); 
			fflush(stdin);
			gets(s[i].city);
    	printf("Enter your std : "); 
			scanf("%d",&s[i].std);
    	printf("Enter your school : "); 
			fflush(stdin);
			gets(s[i].school);
		}
		for(i=0;i<n;i++)
		{
			printf("id:%d\n",s[i].id);
			printf("name:%s\n",s[i].name);
			printf("age:%d\n",s[i].age);
			printf("course:%s\n",s[i].course);
			printf("city:%s\n",s[i].city);
			printf("std:%d\n",s[i].std);
			printf("id: %s\n",s[i].school);
		}
}
