#pragma once
#ifndef Student_h
#define Student_h
 

#include<string>
#include<iostream>
#include"User.h"
#include"Academic_staff.h"
using namespace std;
class Student: 

	public Academic_staff{
public:
	int Id;
	string studentName;
	string cources_enrolled;
	int grades[6] = { 80, 90,95,85,100,97 };
	string cource[6] = { "Math", "English", "physics", "History", "Chemistry", "Programming" };
public:
	//User(const ::string username) : username(studentName)
	double Grades;
	int getid();
	void setId(int);
	void set_studentName();
	void studentGrades();
	void enrollCource();
	void viewTranscript();
	void calculateGpa();
	int updateGrade();
#endif
};

