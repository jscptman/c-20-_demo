#include <iostream>
#include "format"

// c++11之后, 采用了统一的初始化方式, Uniform initialization 不限于struct和class, 几乎可以使用这种初始化方式初始化任何类型数据
int main() {

	struct CircleStruct {
		int x, y;
		double radius;
	}

	class CircleClass {
		public:
			CircleClass(int x, int y, double radius)
			: m_x { x }, m_y { y }, m_radius { radius } {} 

		private:
			int m_x, m_y;
			double m_radius;
	}

	// 在c++11之前, 初始化上述两个类型的实例, 如下:
		CircleStruct myCircleStruct1 { 1, 2, 3.14 };
		CircleClass myCircleClass1(1, 2, 3.14);

	// 在c++11之后, 初始化上述两个类型的实例, 如下:
		CircleStruct myCircleStruct2 { 1, 2, 3.14 };
		CircleClass myCircleClass2 { 1, 2, 3.14 };

	// 使用Uniform initialization还可以防止开发人员无意识的type narrowing造成的bug, 例如:
		void func(int i) { /*...*/ }
		int i = 3.14; //该初始化语句不使用统一初始化, 有的编译器可能会通过! 使用统一初始化语法时编译器必然会Error
		func(i); // 该函数调用, 相当于将3.14 -> 3 , 有的编译器可能会通过! 使用统一初始化语法时编译器必然会Error


	return 0;
}