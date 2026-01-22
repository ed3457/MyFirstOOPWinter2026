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
	// Functions 
	void printStudentInfo();

	// Setters and Getters
	string getName() const;
	void setName(string n);

	string getID() const;
	void setID(string i); 

	string getMajor() const;
	void setMajor(string m);

	// Constructors 

	//Student(); // Default Constructor 

	Student(string n, string i, string m);// Parameterized Constructor or overloaded constructor 


};

