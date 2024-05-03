#include "Menue.h"
#include"User.h"
#include"University.h"
#include"Student.h"
using namespace std;
void Menue::displayMenu() {
	User user;
	University university;
	Student student;	
	Academic_staff acadStuff;
	user.Register();
	user.login();
	string changePass, uniname;
	cout << "Please Add univerity name " << endl;
	cin >> uniname;
	university.setUniName(uniname);
	
	user.changePass();
	
	university.setUniDeparments();
	string role, identfier;
	cout << "What is the role of the user: " << endl;
	cout << "1. Student" << endl;	
	cout << "2. Academic staff" << endl;	
	cin >> role;
	user.setUserRole(role);
	if (role == "1")
	{
		cout << "Welcome to the student portal " << user.username<< endl;
		student.setId(1);
		do
		{
			cout << "\n\\n\n";
			cout << "Please G to display grades" << endl;
			cout << "Please E to enroll in a cource" << endl;
			cout << "Please T to view transcript" << endl;
			cout << "press (ex) to log out" << endl;
			cout << "\n\n\n\n\n\n";
			cin >> identfier;
			if (identfier == "G" || identfier == "g")
			{
				student.studentGrades();
				student.calculateGpa();
			}
			else if (identfier == "E" || identfier == "e")
			{
				student.enrollCource();
			}
			
			else if (identfier == "T" || identfier == "t")
			{
				student.viewTranscript();
			}
			else if (identfier == "ex")
			{
				exitSystem();
				break;
			}
			else
			{
				cout << "Invalid choice" << endl;
			}

		} while (identfier != "ex");

	}
	else if (role == "2")
	{
		string StaffInput;
		cout << "Welcome to the Academic staff portal" << endl;
		
		acadStuff.setStaffId(1);

		cout<<"Press H to set office hours"<<endl;
		cout<<"Press c to view Student list"<<endl;
		cout<<"Press G to view the grades of the students in the last assignment "<<endl;
		cin >> StaffInput;
		if (StaffInput == "H" || StaffInput == "h")
		{
			student.setOfficeHours();
		}
		else if (StaffInput == "C" || StaffInput == "c")
		{
			student.viewStudentsList();
		}
		else if (StaffInput == "G" || StaffInput == "g")
		{
			student.GradeAssignment();
		}
		else
		{
			cout << "Invalid choice" << endl;
		}


	}
	else
	{
		cout << "Invalid choice" << endl;
	}



	


}
void Menue::exitSystem() {
	cout << "Thank you for using the system" << endl;
}
