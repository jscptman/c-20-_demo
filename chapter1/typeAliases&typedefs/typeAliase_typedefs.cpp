// 类型别名用于自定义类型名称,  可以看成是标准类型声明的别名

int main() {
	// typeAliase是c++的写法
	using IntPtr = int*; // 给int*创建别名IntPtr
	int* p1; 
	IntPtr p2;

	//typedefs是老式写法
	typedef int* IntPtr; // 给int*创建别名IntPtr
	IntPtr p;
}
