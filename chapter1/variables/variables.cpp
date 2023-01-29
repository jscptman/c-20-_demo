#include <iostream>
#include "../format"

using namespace std;

int main(int argc, char const *argv[])
{

	// numeric_limits<T> 获取T的取值范围
	cout << "int:\n";
	cout << format("Max int value: {}\n", numeric_limits<int>::max());
	cout << format("Min int value: {}\n", numeric_limits<int>::min());
	cout << format("Lowest int value: {}\n", numeric_limits<int>::lowest());

	cout << "double:\n";
	cout << format("Max double value: {}\n", numeric_limits<double>::max());
	cout << format("Min double value: {}\n", numeric_limits<double>::min());
	cout << format("Lowest double value: {}\n", numeric_limits<double>::lowest()); 

	// 0初始化
	int myInt = {};
	float myFloat = {};

	//casting

	myFloat = { 3.14f };
	int myFloatIntOne = { int(myFloat) };
	int myFloatIntTwo = { (int) myFloat };
	int myFloatIntThree = { static_cast<int>(myFloat) };
	short myShort = { 1 };
	long myLong = { myShort };

	//std::isnan,  A non-zero value (true) if x is a NaN value; and zero (false) otherwise.
	bool isNumber = { isnan(myFloat) };

	// std::isinf, A non-zero value (true) if x is an infinity; and zero (false) otherwise.
	bool isInfinity = { isinf(myFloat) };
	return 0;
}




