// Lab04DA.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
// Print out the menu of choices for the user to select from
void printMenu() {
	cout << "Please Select which operation to perform:" << endl;
	cout << "\t1. Factorial" << endl;
	cout << "\t2. Arithmetic Series" << endl;
	cout << "\t3. Geometric Series" << endl;
	cout << "\t4. Exit" << endl;
	cout << "Your Selection: ";
}
void factorial() {
	int n;
	int factorial = 1;

	cout << "Factorial: \n";
	cout << "Enter a number: \n";
	cin >> n;

	while (n < 0) {
		cout << "Nice try, please enter a POSITIVE number....:";
		cin >> n;
	}

	for (int i = 1; i <= n; ++i) {
		factorial = factorial * i;
	}

	cout << n << "! = ";
	for (int i = 1; i <= n; ++i) {
		cout << i;

		if (i < n) {
			cout << " * ";
		}
	}
	cout << " = " << factorial << endl;
}
void arithmetic() {
	int sum(0);
	int numStart;
	int numAdd;
	int numElement;
	
	cout << "Arithmetic Series: \n";
	cout << "Enter a number to start at: \n";
	cin >> numStart;

	cout << "Enter a number to add each time: ";
	cin >> numAdd;

	cout << "Enter the number of elements in the series: "; {
		cin >> numElement;


		while (numElement < 0) {
			cout << "Nice try, please enter a POSITIVE number....:" << endl;
			cin >> numElement;

		}
	}

	int currentNum = numStart;
	sum = numStart;
	
	cout << numStart;
	for (int i = 1; i < numElement; ++i) {
		currentNum = currentNum + numAdd;
		cout << " + " << currentNum;
		sum = sum + currentNum; 
	}

	cout << " = " << sum << endl;

}
void geometric() {
	int product = 1;
	int r;
	int a;
	int numElement;
	
	cout << "Geometric Series: \n";
	cout << "Enter a number to start at: \n";
	cin >> r;

	cout << "Enter a number to multiply each time: ";
	cin >> a;

	cout << "Enter the number of elements in the series: "; {
		cin >> numElement;


		while (numElement < 0) {
			cout << "Nice try, please enter a POSITIVE number....:" << endl;
			cin >> numElement;

		}
	}

	int currentNum = r;
	product = r;

	cout << r; 
	for (int i = 1; i < numElement; ++i) {
		currentNum = currentNum * a;
		cout << " * " << currentNum; 
		product = product + currentNum; 
	}

	cout << " = " << product << endl; 
}
int main() {
	int choice;
	char again;
	do {
		printMenu();
		cin >> choice;
		// Quit if user chooses to exit (or any invalid choice)
		if (choice > 3 || choice < 1) {
			return 0;
		}
		else if (choice == 1) {
			factorial();
		}
		else if (choice == 2) {
			arithmetic();
		}
		else if (choice == 3) {
			geometric();
		}
		else if (choice == 4) {
			exit(0);
		}

		cout << "Go Again? [Y/N] ";
		cin >> again;

	} while (again == 'y' || again == 'Y');
}