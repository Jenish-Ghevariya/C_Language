#include<iostream>
using namespace std;

class Stud {
	string name;
	int id,std,age;
	char div;
	float per;
	public :
		Stud () {											// default constructor
			cout<<"Enter the name of student : ";
			cin>>name;
			cout<<"Enter the id of student : ";
			cin>>id;
			cout<<"Enter the age of student : ";
			cin>>age;
			cout<<"Enter the standard of student : ";
			cin>>std;
			cout<<"Enter the division of student : ";
			cin>>div;
			cout<<"Enter the percentage of student : ";
			cin>>per;
		}
		Stud (string name,int id,int age,int std,char div,float per)  {			//parameterized constructor
			this->name=name;
			this->id=id;
			this->age=age;
			this->std=std;
			this->div=div;
			this->per=per;
		}
		Stud (Stud &s2) {												//copy constructor
			this->name=s2.name;
			this->id=s2.id;
			this->age=s2.age;
			this->std=s2.std;
			this->div=s2.div;
			this->per=s2.per;
			
		}
		void getData() {
			
			cout<<"Enter the name of student : "<<name<<endl;
			cout<<"Enter the id of student : "<<id<<endl;
			cout<<"Enter the age of student : "<<age<<endl;
			cout<<"Enter the standard of student : "<<std<<endl;
			cout<<"Enter the division of student : "<<div<<endl;
			cout<<"Enter the percentage of student : "<<per<<endl;
		}
		~Stud () {
			cout<<"Thank you visit in out school";
		}
};

main() {
	string name;
	int id,std,age;
	char div;
	float per;
	
	cout<<"Enter the name of student : ";
	cin>>name;
	cout<<"Enter the id of student : ";
	cin>>id;
	cout<<"Enter the age of student : ";
	cin>>age;
	cout<<"Enter the standard of student : ";
	cin>>std;
	cout<<"Enter the division of student : ";
	cin>>div;
	cout<<"Enter the percentage of student : ";
	cin>>per;
	Stud s;
	s.getData();
	Stud s1(name,id,age,std,div,per);
	s1.getData();
	Stud s3=s;						//implicit copy constructor
	s3.getData();
	Stud s4(s1);
	s4.getData();				//explicit copy constructor
	
}
