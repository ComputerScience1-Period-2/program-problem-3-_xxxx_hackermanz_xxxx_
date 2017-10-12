/*
Yugi Sosa, and Anthony Luong - 10/5/17 Period 2
Assignment Name: Three_Digit_Ascend_Descend_Selection
Description : We are supposed to categorize three digit numbers into ascending or descending or neither.
*/


//Libraries
#include <iostream>
#include <conio.h>


//Namespaces
using namespace std; //*


// Functions 
void pause() {
	cout << "Press any key to continue . . .";
	while (!_kbhit());
	_getch();
	cout << "\n";
}


//MAIN

void main() {
	
	// Variable
	
	int threedigitnumberxD;

	cout << "Give me 3 a digit number XD ";
	cin >> threedigitnumberxD;

	// Modulus Calculations

	int XD = threedigitnumberxD;
    int number1 = XD % 10;
	int number2 = (XD / 10) % 10;
	int number3 = (XD / 100);

	// if,else, & else if
	
	if (number1 < number2 && number2 < number3) {
	cout << "This number is in Descending order LUL ..." << endl;
}
	else if (number1 > number2 && number2 > number3){
	cout << "Ascending Order LUL ..." << endl;
}
	else {
	cout << "This number is neither descending or ascending LUL..." << endl;
}
	pause () ;
}