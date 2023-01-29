#include <iostream>

int main() {
	// 指针就是存储地址的变量, 使用new或new[] 分配的内存, 必须使用delete或delete[] 进行回收, 不然可能导致内存泄漏

	// freeStore
	int* myPointerFree { nullptr }; // 初始化一个指针,  nullptr可以省略, 当设置nullptr时, myPointer转boolean 是false
	myPointerFree = { new int }; // 给这个指针重新分配指向内存(该实例为一个int大小的内存块)
	*myPointerFree = 8; // 用这块内存地址存储一个数字
	delete myPointerFree; // 回收内存地址
	myPointerFree = nullptr; // 同时将myPointer设置为nullptr, 以免后面代码滥用

	// stackStore
	int i { 8 }; // 初始化一个整形变量
	int* myPointerStack { &i }; // 获取上面变量的值的地址, 并用指针链接

	// point to struct or class
	struct MyStruct {
		char name { 'n' };
	};

	MyStruct myStruct {
		.name = 'j' 
	};
	MyStruct* myStructPtr { &myStruct };
	std::cout << (*myStructPtr).name << myStructPtr->name  << std::endl; // myStruct->name这种写法是(*mySruct).name的语法糖
	return 0;
}