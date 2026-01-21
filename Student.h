#pragma once
#include "string"
using namespace std; 

class Student
{
private: 
	string name; 
	string id; 
	string major;

public: 
	void printStudentInfo();
	string getName() const;
	void setName(string n);

	string getID() const;
	void setID(string i); 

	string getMajor() const;
	void setMajor(string m);



};

