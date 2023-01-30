#include <iostream>
import employee;
using namespace std;
using namespace Record;
int main() {
	cout << "Testing the Employee class." << endl;
	Employee emp { "John", "Doe" };
	emp.setFirstName("John");
	emp.setLastName("Doe");
	emp.setEmployeeNumber(71);
	emp.setSalary(50'000);
	emp.promote();
	emp.promote(50);
	emp.hire();
	emp.display();
}