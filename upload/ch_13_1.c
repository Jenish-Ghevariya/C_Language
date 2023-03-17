#include<stdio.h>


struct stud {
	char name[20];
	int id,std;
	char course[10];

};


main() {
	int n,i;
	
	printf("Enter the number of students : ");
	scanf("%d",&n);
	struct stud s[n];
	for(i=0;i<n;i++)
	{
			printf("Enter name of student : ");
			scanf("%s",&s[i].name);
			printf("Enter course of student : ");
			scanf("%s",&s[i].course);
			printf("Enter id of student : ");
			scanf("%d",&s[i].id);
			printf("Enter standard of student : ");
			scanf("%d",&s[i].std);
	}

	for(i=0;i<n;i++)
	{
			printf("The name of student : %s\n",s[i].name);
			printf("The id  of student : %d\n",s[i].id);
			printf("The standard  of student : %d\n",s[i].std);
			printf("The course  of student : %s\n",s[i].course);
	}

	

	
	
	
	
}
