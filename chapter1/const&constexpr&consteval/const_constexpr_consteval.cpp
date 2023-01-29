int main() {

	// 普通常量声明
	const int versionNumberMajor { 2 }; // 初始化一个const int 常量

	// 指针常量声明的两种形式和区别
		// 1: 可以改变指向地址, 不能改变地址存储的值
	const int* ip1; // 与 int const* ip 写法意义相同
	ip1 = new int[10];
	ip1[4] = 5; // error 上述常量声明形式, 不能改变内存区域中的值
	delete ip1;
	ip1 = nullptr;
		// 2: 不可以改变指向地址, 可以改变地址存储的值
	int* const ip2 { nullptr };
	ip2 = new int[10]; // error 上述常量声明形式, 不能改变指针指向的内存地址
	delete ip2;

	// 函数参数常量:
	void mysteryFunction(const string* someString) {
		*someString = "Test"; // error, 不能改变这种形式的指针声明的值
	}

	// 类方法常量:
	class AirlineTicket {
		public:
			double calculatePriceInDollars() const; // 该方法为类常量方法, 不能改变类中的其他变量的值
	}

	// 引用的常量声明: 常量引用, 就喝普通常量声明一样, 不能修改引用变量, 但是可以修改原始变量
	int z; 
	const int& zRef { z }; 
	zRef = 4; // error, 
	z = 4; // pass

	// constexpr 用来建议编译器在编译时评估由该修饰符修饰的表达式, 因为c++中某些情况下(例如在定义一个数组时, 数组的大小需要一个常量表达式,而不能是变量)必须要常量表达式
	const int getArraySize1() { return 32; }
	constexpr int getArraySize2() { return 32; }
	int myArray1[getArraySize1()]; // error 数组声明必须要求长度是常量 
	int myArray2[getArraySize2()]; // pass

	// consteval 因为constexpr不能保证一定在编译阶段执行, consteval则保证代码一定在编译阶段执行
	constexpr double inchToMm1(double inch) { return inch * 25.4; }
	constexpr double const_inch { 6.0 }; 
	constexpr double mm1 { inchToMm1(const_inch) };   // 在编译时执行
	double dynamic_inch { 8.0 }; 
	double mm2 { inchToMm1(dynamic_inch) };   // 在运行时执行
	consteval double inchToMm2(double inch) { return inch * 25.4; } // consteval 一定在编译时运行

	return 0;
}	