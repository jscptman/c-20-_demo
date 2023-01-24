module;
#include <iostream>
module airline_ticket;
using namespace std;

// 初始化构造函数的2种方式
// 第一种:
// AirlineTicket::AirlineTicket()
// :  // 冒号后面为初始化执行语句
// {}

//第二种:
AirlineTicket::AirlineTicket() {
	// 可以在body里进行初始化操作
	cout << "实例初始化了" << endl;
}

// 初始化实例销毁钩子

AirlineTicket::~AirlineTicket() {
	// doSomeThing
	cout << "实例销毁了" << endl;
}

// 实现计算票价方法
double AirlineTicket::calculatePriceInDollars() {
	if (hasVipStatus()) {
		// 如果有vip身份,则免费
		return 0;
	}
	// 如果没有则票价为总里程数*0.1
	return getNumberOfMiles() * 0.1;
}

//实现获取乘客姓名方法
char AirlineTicket::getPassengerName() {
	return m_passengerName;
}

// 实现设置乘客姓名方法
void AirlineTicket::setPassengerName(char name)
{
	m_passengerName = name;
}

// 实现获取乘客总里程数方法
int AirlineTicket::getNumberOfMiles() {
	return m_numberOfMiles;
}

// 实现设置乘客总里程数方法
void AirlineTicket::setNumberOfMiles(int miles) {
	m_numberOfMiles = miles;
}

//实现获取乘客身份信息方法
bool AirlineTicket::hasVipStatus() {
	return m_hasVipStatus;
}
// 实现改变乘客身份信息方法
void AirlineTicket::setHasVipStatus(bool status) {
	m_hasVipStatus = status;
}







