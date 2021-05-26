/**************************
****Author: Rich***********
****Date: 5/12/19**********
Program: Gives name and age
***************************/


#include "std_lib_facilities.h"

int main() {

	cout << "Please enter your first name and age: \n";
	string first_name;
	double age;
	cin >> first_name >> age;
	cout << "Hello " << first_name << " (age " << age << ")\n" << "You are " << age * 12 << " months old\n";
	keep_window_open();
	return 0;
}