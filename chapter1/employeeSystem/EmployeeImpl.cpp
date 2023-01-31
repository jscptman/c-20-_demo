module;
#include <iostream>
#include "../format"
#include<string>

module employee;
using namespace std;

namespace Record {
	Employee::Employee(){};
	Employee::Employee(const std::string& firstName, const std::string& lastName)
		: m_firstName { firstName }, m_lastName { lastName } {
	}

	void Employee::promote(const int raiseAmount) {
		setSalary(getSalary() + raiseAmount);
	}

	void Employee::demote(const int demeritAmount) {
		setSalary(getSalary() - demeritAmount);
	}

	void Employee::hire() {
		m_hired = true;
	}

	bool Employee::isHired() const {
		return m_hired;
	}

	void Employee::fire() {
		m_hired = false;
	}

	void Employee::display() const {
		cout << format("Employee: {}, {}", getLastName(), getFirstName()) << endl;
		cout << "-------------------------" << endl;
		cout << (isHired() ? "Current Employee" : "Former Employee") << endl;
		cout << format("Employee Number: {}", getEmployeeNumber()) << endl;
		cout << format("Salary: ${}", getSalary()) << endl;
		cout << endl;
	}

	void Employee::setFirstName(const std::string& firstName) {
		m_firstName = firstName;
	}

	const std::string& Employee::getFirstName() const{
		return m_firstName;
	}

	void Employee::setLastName(const std::string& lastName) {
		m_lastName = lastName;
	}

	const string& Employee::getLastName() const {
		return m_lastName;
	}

	void Employee::setEmployeeNumber(int employeeNumber) {
		m_employeeNumber = employeeNumber;
	} 

	int Employee::getEmployeeNumber() const {
		return m_employeeNumber;
	}

	void Employee::setSalary(int newSalary) {
		m_salary = newSalary;
	}

	int Employee::getSalary() const {
		return m_salary;
	}
}
