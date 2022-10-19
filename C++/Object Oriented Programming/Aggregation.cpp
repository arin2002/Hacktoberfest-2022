#include<iostream>
using namespace std;


class Book //Book Class
{
private:
	int bookId;
	string title;
	float price;
public:
	Book()
	{
		bookId = 0;
		title = "";
		price = 0;
	}
	Book(int bookId, string title, float price)
	{
		cout << "overloaded Constructor of Book called...!" << endl;
		this->bookId = bookId;
		this->title = title;
		this->price = price;
	}
	void setBook(int bookId, string title, float price)
	{
		this->bookId = bookId;
		this->title = title;
		this->price = price;
	}
	void showBook()
	{
		cout << "Book Id: " << bookId << endl;
		cout << "Title: " << title << endl;
		cout << "Price: " << price << endl;
	}
	Book(const Book& b)
	{
		cout << "Copy Constructor of Book....!" << endl;
		bookId = b.bookId;
		title = b.title;
		price = b.price;
	}
	const Book& operator=(const Book& b)
	{
		cout << "Assignment Operator of Book....!" << endl;
		bookId = b.bookId;
		title = b.title;
		price = b.price;
		return *this;
	}
};
class Instructor    //Instructor Class
{
private:
	int instructorId;
	string name;
	float salary;

public:
	Instructor()
	{
		instructorId = 0;
		name = "";
		salary = 0;
	}
	Instructor(int instructorId, string name, float salary)
	{
		cout << "Overloaded Constructor of Instructor.... !" << endl;
		this->instructorId = instructorId;
		this->name = name;
		this->salary = salary;
	}
	void setInstructor(int instructorId, string name, float salary)
	{
		this->instructorId = instructorId;
		this->name = name;
		this->salary = salary;
	}
	void showInstructor()
	{
		cout << "Instructor Id: " << instructorId << endl;
		cout << "Name: " << name << endl;
		cout << "Salary: " << salary << endl;
	}
	Instructor(const Instructor& i)
	{
		cout << "Copy Constructor of Instructor Called..!" << endl;
		instructorId = i.instructorId;
		name = i.name;
		salary = i.salary;
	}
	const Instructor &operator=(const Instructor &i)
	{
		cout << "Assignment Operator of Instructor.... ! " << endl;
		instructorId = i.instructorId;
		name = i.name;
		salary = i.salary;
		return *this;
	}
};

class Course  //Course Class
{
private:
	int courseID;
	string courseName;
	Book textBook;
	Instructor instructor;
public:
	Course() :textBook(), instructor()
	{
		cout << "Default Constructor of Course Called.. ! " << endl;
		courseID = 0;
		courseName = "";
	}
	
	Course(int courseID, string courseName, Book text, Instructor ins) :textBook(text), instructor(ins)
	{
		cout << "Overloaded constructor of the course class called ....! " << endl;
		textBook = text;
		instructor = ins;
		this->courseID = courseID;
		this->courseName = courseName;
	}

	void setCourse(int courseID, string courseName, Book text, Instructor i)
	{
		this->courseID = courseID;
		this->courseName = courseName;
		textBook = text;
		instructor = i;
	}
	void showCourse()
	{
		cout << "Course Id: " << courseID << endl;
		cout << "Course Name: " << courseName << endl;
		cout << "Text Book Details: " << endl;
		textBook.showBook();
		cout << "Instructor Details: " << endl;
		instructor.showInstructor();
	}
	Course(const Course& c) 
	{
		cout << "Copy Constructor of Course Called.. ! " << endl;
		courseID = c.courseID;
		courseName = c.courseName;
		textBook = c.textBook;
		instructor = c.instructor;
	}
	Course& operator=(const Course& c)
	{
		cout << "Assignment Operator of Course Called.. !  " << endl;
		textBook = c.textBook;
		instructor = c.instructor;
		courseID = c.courseID;
		courseName = c.courseName;
		return *this;
	}
};

int main()
{
	Book book(12, "Gaddis", 23.4);
	Instructor instructor(232, "james", 34);
	
	cout << "--------------------------------------------" << endl;
	Course c(12,"OOP",book,instructor);
	Course c1;
	c = c1;	
}