#include "University.h"
#include <string>
using namespace std;
 void University::setUniCollage(string ncollage) {
	list_collages = ncollage;
}
string University::addUniCollage() {
	return list_collages;
}
void University::setUniDeparments(){
    cout << "There are 3 departments in " << addUniCollage() << endl;
	cout << "1. Computer Engineering" << endl;
	cout << "2. Mechanical Engineering" << endl;
	cout << "3. Communication Engineering" << endl;
    cout << "Please enter the department number (1-3): ";

    int choice;
    cin >> choice;

    switch (choice) {
    case 1:
        cout << "Computer Engineering" << endl;
        cout << "Thank you for choosing Computer Engineering " << endl;
        break;
    case 2:
        cout << "Mechanical Engineering" << endl;
        cout << "Thank you for choosing Mechanical Engineering " << endl;
        break;
    case 3:
        cout << "Communication Engineering" << endl;
        cout << "Thank you for choosing Communication Engineering " << endl;
        break;
    default:
        cout << "Invalid choice" << endl;
    }

	
	
	
}

void University::setUniName(string n) {
	uni_name = n;
}
string University::addUniName() {
	return uni_name;
}