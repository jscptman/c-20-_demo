#include <iostream>
#include <array>
#include <vector>
#include <utility>
#include "../format"

using namespace std;

int main() {

	// c-style array
	int cStyleArrayOne[3] {}; // 初始化数组元素为0
	int cStyleArrayTwo[] { 1, 2, 4 }; //初始化数组的第二种方式
	int cStyleArrayThree[3] { 2 }; //如果给定数组大小, 但提供的初始化值的数量少于数组大小, 剩余的数组元素默认为0;
	int cStyleArrayFour[3][3]; //创建一个3x3的二维数组
	size_t arrayOneSizeBySize { size(cStyleArrayOne) }; // 获取c风格的数组的长度方法一: std::size()
	size_t arrayOneSizeBySizeOF { sizeof(cStyleArrayOne) / sizeof(cStyleArrayOne[0]) }; // 获取c风格数组的长度方法二: 利用sizeof获取数组总字节数,再除以单元素字节数.
	cout << format( "cStyleArrayOne: {} {} {}, size is {} {}", cStyleArrayOne[0], cStyleArrayOne[1], cStyleArrayOne [2], arrayOneSizeBySize, arrayOneSizeBySizeOF);

	// std::array define in <array> c++风格定长数组
	array<int, 3> cppStyleArrayOne {};
	array cppStyleArrayTwo { 1, 5, 3 }; // 支持类模版推导, 即可以省略角括号
	//array cppStyleArrayIllegal; // 使用CTAD时, 必须进行初始化, 不然编译器无法推断准确类型, 这种形式的声明事非法的.
	size_t cppStyleArrayTwoSize { cppStyleArrayOne.size() };

	// std::vector defin in <vector> c++风格动态数组
	vector<int> cppStyleVectorArrayOne { 2, 3 };
	vector cppStyleVectorArrayTwo { 'b' }; // vectorArray 同样支持CTAD, 所以可以省略角括号
	//vector cppStyleVectorIllegal; // 使用CTAD时, 必须初始化, 原因同上, 此条声明是非法的
	cppStyleVectorArrayTwo.push_back('a'); // vectorArray 通过push_back来动态添加元素

	// std::pair define in <utility> 固定长度(2)的多类型数组, 即两个元素可以是不同类型
	pair<double, int> pairArray { 3.14, 5 };
	cout << format("firstElement: {}, secondElement: {}\n", pairArray.first, pairArray.second);
	pair pairCTAD { 'b', 3 }; // 同样支持CTAD
	return 0;
}