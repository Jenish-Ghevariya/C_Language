#include<stdio.h>

struct marks
{
	int roll_no;
	char name;
	int chem_marks;
	int maths_marks;
	int phy_marks;
}s[5];
int main()
 {
 	int i,t,n;
 	float p;
 	for(i=0;i<n;i++)
    {
    	printf("roll no:");
    	scanf("%d",&s[i].roll_no);
    	printf("name:");
    	scanf("%s",&s[i].name);
    	printf("chem marks:");
    	scanf("%d",&s[i].chem_marks);
    	printf("maths_marks:");
    	scanf("%d",&s[i].maths_marks);
    	printf("phy_marks:");
    	scanf("%d",&s[i].phy_marks);
     }
	for(i=0;i<n;i++)
	{
		printf("roll no: %d\n",s[i].roll_no);
		printf("name: %d\n",s[i].name);
		printf("chem_marks: %d\n",s[i].chem_marks);
		printf("maths_marks: %d\n",s[i].maths_marks);
		printf("phy_maths: %d\n",s[i].phy_marks);
		 
		p=s[i].chem_marks + s[i].maths_marks + s[i].phy_marks;
		p=(t/300)*100;
		printf("percentage is: %f",p);
	}
 }
