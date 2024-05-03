#include "User.h"
#include<iostream>
#include<string>
using namespace std;
void User::Register() {
	//string username, email, password;
	cout << "Enter your name to register  " << endl;
	getline(cin, this->username);
	cout << "Enter your email adress " << endl;
	getline(cin, email);
	cout << "Create your password "<<endl;
	 getline(cin, password);
}



void User::login() {
	string aemail,pass, Regs;
	cout << "Enter your email to log in " << endl;
	cin>>aemail;
	cout << "Enter your password" << endl;
	cin >> pass;


	if(aemail == this->email && pass == password)
	{
		cout << "Welcome " << this->username << "You are logged in succesfully" << endl;
		return;
	}
	

	while(aemail != this->email || pass != this->password)
	{
		cout << "You are not registered, please register first" << endl;
		cout << "If you want to register press R Or Press (any key) to Login Again!! " << endl;
		cin >> Regs;
		if (Regs == "R" || Regs == "r") {
			Register();
			return;
		}
		else {
			login();		// recursive function
			return;
		}
	}
}
void User::logout() {
	string logouts;
	cout << "Dear customer, to logout press L" << endl;
	cin >> logouts;
	if (logouts == "l") {
		login();
	}
}
void User::changePass() {
	string chapass, pass;
	cout << "If you want to change your password Press  C else press any other key " << endl;
	cin >> chapass;
	if (chapass == "C"||chapass=="c") {
		cout << "Enter new password " << endl;
		cin >> pass;
		password = pass;
	}

}
void User::setUserRole(string rol) {
	role = rol;

}
string User::getUserRole() {
	return role;
}
