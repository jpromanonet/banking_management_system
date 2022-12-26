#include <stdio.h>
#include <conio.h>
#include <iostream>

using namespace std;
// Bank class (functions)
class bank 
{
	// Declaring variables
	char name[100];
	char address[100];
	char account;

	// Public functions
	public:
		void open_account();
		void deposite_money();
		void withdraw_money();
		void display_account();
};

// Functions
void bank::open_account() 
{
	cout << "Enter your full name: ";
	cin.ignore();
	cin.getline(name, 100);
	cout << "Enter your address: ";
	cin.ignore();
	cin.getline(address, 100);
	cout << "Type of account | savings (S) or current (C): ";
	cin >> account;
	cout << "Enter deposit amount: ";
}

// Main functions
int main() 
{

	// User menu
	cout << "1. Open Account \n";
	cout << "2. Deposite Money \n";
	cout << "3. Withdraw Money \n";
	cout << "4. Display Account \n";
	cout << "5. Exit";

	//getch();
	return 0;
}