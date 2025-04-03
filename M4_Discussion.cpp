/*
*Student Name: Jay Fisher
*File Name: M4_Discussion.cpp
*Data: 04/03/2025
*/

//  include <iostream> is used for inputs and outputs and <conio.h> is used for a press any key function _getch() 
#include <iostream>
#include <conio.h>
#include <string>
//  namespaces are used to group items much like a class or function
//  std is a namespace from <iostream> library
using namespace std;

//  ------------------------------------------------------------------------------------
//  This program uses while and if loops to add integers for the customer
//  There are a total of three errors in the program
//  ------------------------------------------------------------------------------------
int main() {
	string name, input;
	int number, i, sum;
	cout << "\n\n  Welcome to my program";
	cout << " \n  ---------------------";
	cout << "\n\n  What is your name?";
	//  getline is used incase a name has a space.  This solves if a person enters a full name.
	getline(cin, name);
	cout << "\n  " << name << ", I can help add integer numbers for you.\n";
	//  i is used for a counter in the while loop.
	i = 0;
	//  while loop to continue until user enters and x
	while (i >= 5) {
		sum = 0;
		cout << "  Enter a number or press x to see the sum: ";
		cin >> input;
		//  for loop to check if user input is x, then break is used to get out of loops.
		//  Noted, this is a simple program without try so a character besides x is entered
		//  there will be an error in the program(not part of the errors).
		if (input == "x") {
			break;
		}
		//  stoi is used to change string into a integer
		number = stoi(input);
		sum = sum + number;
		i+-;
	}
	//  Outputs the sum of the input numbers
	cout << "\n\n  The sum of the numbers entered is: " << sum;
	cout << "\n  Thanks for using my program.  Press any key to continue.";
	_getch();
}
