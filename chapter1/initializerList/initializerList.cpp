#include <iostream>
#include "../format"
#include <initializer_list>
using namespace std;

int makeSum(initializer_list<int> params) {
	// initializer_list<T> 允许接收任意数量的T类型的参数, 调用函数时传入的参数以initializer_list对象的形式传入, 相当于js的析构函数
	int total { 0 };
	for (int value : params) total += value;
	return total;
}

int main() {
	cout << makeSum({ 3, 2, 1 }) << endl;
	cout << makeSum({ 0, 0, 0, 0 }) << endl;
}