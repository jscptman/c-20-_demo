module;
#include <string>
export module employee;
namespace Record {
	int DefaultStartingSalary { 30'000 };
	export int DefaultRaiseAndDemeritAmount { 1'000 };
	export class Employee {
		public:
			Employee();
			Employee(const std::string& firstName,
					 const std::string& lastName);
			void promote(const int raiseAmount = DefaultRaiseAndDemeritAmount); // 加薪方法
			void demote(const int demeritAmount = DefaultRaiseAndDemeritAmount); // 降薪方法
			void hire(); // 雇佣
			bool isHired() const; // 判断是否雇佣
			void fire(); // 解雇
			void display() const; // 展示员工具体信息
			void setFirstName(const std::string& firstName); // 设置姓氏
			const std::string& getFirstName() const; // 获取姓氏
			void setLastName(const std::string& lastName); // 设置名字
			const std::string& getLastName() const; // 获取名字
			void setEmployeeNumber(int employeeNumber); // 设置员工编号
			int getEmployeeNumber() const; // 获取员工编号
			void setSalary(int newSalary); // 设置薪资
			int getSalary() const; // 获取薪资
		private:
			std::string m_firstName;
			std::string m_lastName;
			int m_employeeNumber { -1 };
			int m_salary { DefaultStartingSalary };
			bool m_hired { false };
	};
} 