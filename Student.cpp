#include "Student.h"
#include <iostream>
using namespace std;
void Student::printStudentInfo()
{
	cout << "Student Name:\n"<<name<<endl;
	cout << "Student ID:\n"<<id<<endl;
	cout << "Student Major\n"<<major<<endl;
}

string Student::getName() const
{
	return name; 
}

void Student::setName(string n)
{
	//TODO: Add validation later 
	name = n;

}

string Student::getID() const
{
	return id;
}

void Student::setID(string i)
{
	id = i;
}

string Student::getMajor() const
{
	return major;
}

void Student::setMajor(string m)
{
	major = m;
}

//Student::Student()
//{
//	setName("Not given yet!");
//	setID("--------");
//	setMajor("Not set yet!");
//
//}

Student::Student(string n, string i, string m)
{
	setName(n);
	setID(i);
	setMajor(m);


}





