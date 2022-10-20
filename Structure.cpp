#include<iostream>
using namespace std;
struct Student
{
	string name;
	string rollNo;
	double cgpa;
	int semester;
};
int main()
{
	const Student a = { "ABC","123",4,4 };
	cout<<"Name     = "<<a.name    <<endl;
	cout<<"RollNo   = "<<a.rollNo  <<endl;
	cout<<"CGPA     = "<<a.cgpa    <<endl;
	cout<<"Semester = "<<a.semester<<endl;
	return 0;
}
