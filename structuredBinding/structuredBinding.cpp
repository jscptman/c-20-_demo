#include <iostream>
#include "../format"
#include <array>
#include <utility>
using namespace std;

int main() {

	// 数组解构
	array myArray { "a", "b", "c" };
	auto [a, b, c] { myArray }; // 解构赋值, 将x, y, z 分别赋予 myArray中的三个元素的值(必须用auto, 不能用int)
	cout << format("the array result: {}, {}, {}\n", a, b, c);

	// struct解构
	struct Point { int d, e, f; };
	Point point;
	point.d = 1;
	point.e = 2;
	point.f = 3;
	auto [d, e, f] { point };
	cout << format("the struct result: {}, {}, {}\n", d, e, f);

	// pair解构
	pair myPair { 'g', 'h' };
	auto [g, h] { myPair };
	cout << format("the pair result: {}, {}\n", g, h);

	return 0;
}
