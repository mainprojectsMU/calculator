#include<iostream> //needed to print and to take input

using namespace std; //easier writing

double ask_for_number(string);
char ask_for_operation();
void add(double,double);
void subtract(double,double);
void multiply(double,double);
void divide(double,double);

int main() { //the program starts here

}

double ask_for_number(string name = "") {
	double input;
	cout << "please enter a number " << name << ": ";
	cin >> input;
	return input;
}
char ask_for_operation() {
	char input;
	cout << "available operators: +, -, *, /" << endl;
	cout << "please enter one of the listed opeerators: ";
	cin >> input;
	return input;
}
void add(double A,double B) {
	cout << A << " + " << B << " = " << A+B;
}
void subtract(double A,double B) {
	cout << A << " - " << B << " = " << A-B;
}
void multiply(double A,double B) {
	cout << A << " * " << B << " = " << A*B;
}
void divide(double A,double B) {
	if(B==0)
		cout << "Error:" << endl << "\tdivision by zero." << endl;
	else
		cout << A << " / " << B << " = " << A/B;
}