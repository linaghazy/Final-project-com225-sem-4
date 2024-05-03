#include "Academic_staff.h"
#include"University.h"
using namespace std;
void Academic_staff::setStaffId(int id) {
	cout << "Enter the staff id: ";
	cin >> id;
	StaffId = id;

}
int Academic_staff::getStaffId() {
	return StaffId;
}
void Academic_staff::teachcource() {
	cout << "Enter the course you want to teach: ";
	cin >> courses_Tought;
}
void Academic_staff::viewStudentsList() {	
	for (int i = 0; i < 5; i++) {
		cout << "Student " << i + 1 << ": " << students_list[i] << endl;
	}



}
void Academic_staff::setOfficeHours() {
	cout << "Enter the office hours: ";
	cin >> office_hours;
}
int Academic_staff::getOfficehours() {
	return office_hours;
}
void Academic_staff::GradeAssignment() {
	cout << "The assignment grades of the students are " << endl;
	cout  << students_list[0]<<"A" << endl;
	cout << students_list[1] << "B" << endl;
	cout << students_list[2] << "A" << endl;
	cout << students_list[3] << "B" << endl;
	cout << students_list[4] << "A" << endl;

	
}
