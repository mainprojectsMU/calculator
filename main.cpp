#include<iostream> //needed to print and to take input

using namespace std; //easier writing

double ask_for_number(string);
char ask_for_operation();
void add(double,double);
void subtract(double,double);
void multiply(double,double);
void divide(double,double);

int main() { //the program starts here
	double A = ask_for_number("A");
	double B = ask_for_number("B");
	char operation = ask_for_operation();
	switch(operation) {
		case '+':
			add(A,B);
			break;
		case '-':
			subtract(A,B);
			break;
		case '*':
			multiply(A,B);
			break;
		case '/':
			divide(A,B);
			break;
		default:
			cout << "Error:" << endl << "\tundefined operator." << endl;
	}
}

double ask_for_number(string name = "") {
	//print a message asking the user to enter a number (optionally: use the variable `name` to specify which variable the user is entering)
	//return the number
}
char ask_for_operation() {
	//print the available operators {'+', '-', '*', '/'}
	//print a message asking the user to choose one
	//return the choice
}
void add(double A,double B) {
	//print a message expressing the entire calculation `A+B=C`
}
void subtract(double A,double B) {
	//print a message expressing the entire calculation `A-B=C`
}
void multiply(double A,double B) {
	//print a message expressing the entire calculation `A*B=C`
}
void divide(double A,double B) {
	//print a message expressing the entire calculation `A/B=C` (optionally: detect dividing by zero and display an error message instead)
}