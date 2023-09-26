#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main()
{

	string correctPassword = "123456";

	cout << "Enter your password: " << endl; 
	string enteredPassword; 

	//getline()
	cin >> enteredPassword; 

	if (enteredPassword == correctPassword)

		cout << "You're in! Welcome to your fabulous app!" << endl; 
		cout << "Another statement!" << endl;

	else
		cout << "WRONG!" << endl;


}