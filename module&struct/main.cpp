// helloworld.cpp

import employee;
#include <iostream>
#include "../format"
using namespace std;

int main()
{
	Employee anEmployee; 
	anEmployee.firstInitial = 'J'; 
	anEmployee.lastInitial = 'D'; 
	anEmployee.employeeNumber = 42; 
	anEmployee.salary = 80000;
	cout << "Hello, World!" << endl;
	cout << format("lalalala") << endl;
	cout << format("Number: {}", anEmployee.employeeNumber) << endl;
	return 0;
}

