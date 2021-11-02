#include <iostream>
#include <math.h>

using namespace std;
float op1;
char symbol;
float op2;
void addition() {
	cout << "Enter equation as needed: ";
	cin >> op1 >> symbol >> op2;
	if(symbol == '+') {
		cout << (op1 + op2) << endl;
	}else{
		cout << "Wrong format, enter like (#+#)" << endl;	
	}
};
void subtraction() {
	cout << "Enter equation as needed: ";
	cin >> op1 >> symbol >> op2;
	if(symbol == '-') {
		cout << (op1 - op2) << endl;
	}else{
		cout << "Wrong format, enter like (#-#)" << endl;	
	}
};
void division() {
	cout << "Enter equation as needed: ";
	cin >> op1 >> symbol >> op2;
	if(symbol == '/') {
		cout << (op1 / op2) << endl;
	}else{
		cout << "Wrong format, enter like (#/#)" << endl;	
	}
};
void multiplication() {
	cout << "Enter equation as needed: ";
	cin >> op1 >> symbol >> op2;
	if(symbol == '*') {
		cout << (op1 * op2) << endl;
	}else{
		cout << "Wrong format, enter like (#*#)" << endl;	
	}
};
void power() {
	cout << "Enter number to be put to the power along with power: ";
	cin >> op1 >> symbol >> op2;
	if (symbol == '^') {
		cout << pow(op1, op2) << endl;
	}else{
		cout << "Wrong format, enter like (#^#)" << endl;
	}
};
void squareRoot() {
	cout << "Enter number that you wish to squareroot: ";
	cin >> op1;
	cout << sqrt (op1) << endl;
}
void pythag() {
	cout << "Enter the numbers you wish to use: ";
	cin >> op1 >> symbol >> op2;
	if (symbol == '+') {
		cout << sqrt (pow(op1, 2) + pow(op2, 2)) << endl;
	}else if (symbol == '-') {
		cout << sqrt (pow(op1, 2) - pow(op2 , 2)) << endl;
	}else{
		cout << "Wrong format, enter like (#+#) solving for hypotnuse or (c-#) when solving a or b " << endl;
	}
}
int main() {
	int userinput;
	do {
		cout << "Calculator" << endl;
		cout << "1. Addition" << endl;
		cout << "2. Subtraction" << endl;
		cout << "3. Division" << endl;
		cout << "4. Multiplication" << endl;
		cout << "5. Power" << endl;
		cout << "6. Square Root" << endl;
		cout << "7. Pythagorean Theorem" << endl;
		cout << "8. Exit" << endl; 
		cout << "Enter user input.: ";
		cin >> userinput;
		switch(userinput) {
			case 1:
				addition();
			break;
			case 2:
				subtraction();
			break;
			case 3:
				division();
			break;
			case 4:
				multiplication();
			break;
			case 5:
				power();
			break;
			case 6:
				squareRoot();
			break;
			case 7:
				pythag();
			break;
			case 8:
				cout << "Bye bye." << endl;
			break;
			default:
				cout << "That is an invalid input do 1-8" << endl;
		}
	}while(userinput != 8);
	return 0;
}
