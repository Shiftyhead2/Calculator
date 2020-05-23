#include <iostream>
#include <string>

using namespace std;

auto addNumbers(double &num1, double &num2) 
{
	return num1 + num2;
}

auto SubtractNumbers(double &num1,double &num2) 
{
	return num1 - num2;
}

auto multiplication(double &num1, double &num2) 
{
	return num1 * num2;
}

auto divideNumbers(double& num1, double& num2) 
{
	return num1 / num2;
}

auto baseNnumber(double& num1, int& base) 
{
	return powl(num1, base);
}

auto LogNumber(double& num1) 
{
	return log(num1);
}

int main() 
{
	
	
	int choice;
	double num1;
	double num2;
	int base;

	do
	{
		cout << "Welcome to a calculator" << endl;
		cout << "Choose which operator you want to do" << endl;
		cout << "-------------------------------------" << endl;
		cout << "[1]Add two numbers" << endl;
		cout << "[2]Subtract two numbers" << endl;
		cout << "[3]Multiplicate two numbers" << endl;
		cout << "[4]Divide two numbers" << endl;
		cout << "[5]Square root" << endl;
		cout << "[6]Log" << endl;
		cout << "[0]Exit the program" << endl;
		cout << "-------------------------------------" << endl;
		cin >> choice;
		switch (choice)
		{
			case 1:
				cout << "----------------------------------" << endl;
				cout << "Type in the first number you want to add: ";
				cin >> num1;
				cout << "Type in the second number you want to add: ";
				cin >> num2;
				cout << "Result: " << addNumbers(num1, num2) << endl;
				cout << "----------------------------------" << endl;
				break;
			case 2:
				cout << "----------------------------------" << endl;
				cout << "Type in the first number you want to subtract: ";
				cin >> num1;
				cout << "Type in the second number you want to subtract: ";
				cin >> num2;
				cout << "Result: " << SubtractNumbers(num1, num2) << endl;
				cout << "----------------------------------" << endl;
				break;
			case 3:
				cout << "----------------------------------" << endl;
				cout << "Type in the first number you want to multiply: ";
				cin >> num1;
				cout << "Type in the second number you want to multiply: ";
				cin >> num2;
				cout << "Result: " << multiplication(num1, num2) << endl;
				cout << "----------------------------------" << endl;
				break;
			case 4:
				cout << "----------------------------------" << endl;
				cout << "Type in the first number you want to divide: ";
				cin >> num1;
				cout << "Type in the second number you want to divide: ";
				cin >> num2;
				cout << "Result: " << divideNumbers(num1, num2) << endl;
				cout << "----------------------------------" << endl;
				break;
			case 5:
				cout << "----------------------------------" << endl;
				cout << "Type in the first number you want to square root: ";
				cin >> num1;
				cout << "Type in the base: ";
				cin >> base;
				cout << "Result: " << baseNnumber(num1,base) << endl;
				cout << "----------------------------------" << endl;
				break;
			case 6:
				cout << "----------------------------------" << endl;
				cout << "Type in the number you want to log: ";
				cin >> num1;
				cout << "Result: " << LogNumber(num1) << endl;
				cout << "----------------------------------" << endl;
				break;

		}
		

	} while (choice != 0);

	
	

	return 0;
}