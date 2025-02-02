#include <iostream>
using std::endl;
using std::cout;
using std::cin;

/*
Practice Task 1: Loop Practice
Objective: Use while, do-while, and for loops to solve simple problems.

Instructions:

Write a program that demonstrates the following:
Use a while loop to print numbers from 1 to 10.
Use a do-while loop to prompt the user to input a number between 1 and 10. If the number is invalid, prompt them again.
Use a for loop to print the first 10 multiples of 3 (i.e., 3, 6, 9, ..., 30).
*/

int main() {
	int number = 1;
	cout << "Numbers 1-10:" << endl;

	while (number <= 10) {
		if (number == 10) {
			cout << number << "." << endl;
		}
		else {
			cout << number << ", ";
		}
		number++;
	}

	number = 0;

	do {
		cout << endl << "Enter a number (1-10): ";
		cin >> number;
		// -- add an error check for cin
	} while (number < 1 || number > 10);

	cout << "Number entered was " << number << endl << endl;

	number = 3;
	cout << "Multiples of 3:" << endl;

	for (int i = 1; i <= 10; i++) {
		if (i == 10) {
			cout << (number * i) << "." << endl;
		}
		else {
			cout << number * i << ", ";
		}
	}
}