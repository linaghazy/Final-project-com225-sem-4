#include "Student.h"
using namespace std;

void Student::setId(int id) {
	cout << "Enter your ID: "<<endl;
	cin >> id;
	
	Id = id;
}
int Student::getid() {
	return Id;
}
void Student::set_studentName() {
	 User(username);

}

void Student::enrollCource() 
{
	cout << "Enter the course you want to enroll in: " << endl;
	cin >> cources_enrolled;
	cout << "You have enrolled in " << cources_enrolled << endl;
	cout << "To enroll in another cource press E else press any other key to continue " << endl;
	string enrolls;
	int x = 6;
	cin >> enrolls;
	if (enrolls == "E" || enrolls == "e") {
		enrollCource();
	}
	else {
		cout << "You have enrolled in " << cources_enrolled << endl;
	}
	//-------------------------------Dont know how to add them to the array;
}




void Student::viewTranscript() {
	cout << "Your transcript is: " << endl;	
	for (int i = 0; i < 6; i++) {
		cout << cource[i] << grades[i] << endl;
	}
	
	
}

int Student::updateGrade() {

	return 0;
}
void Student::studentGrades() {
	cout << "Your grades are: " << endl;
	for (int i = 0; i < 6; i++) {
		cout <<cource[i]<< grades[i] << endl;
	}
}
void Student::calculateGpa() {//wrong done gets average grade 
	double sum = 0;
	for (int i = 0; i < 6; i++) {
		sum += grades[i];
	}
	Grades = sum / 6;

	cout << "Your GPA is: " << Grades << endl;
} 