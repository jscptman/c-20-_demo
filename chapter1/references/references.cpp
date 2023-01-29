// reference 可以当成是一个已存在变量的别名, 他在一定程度上替代了指针
//下面代码存在变量名重复错误, 要运行需要修改变量名

int main() {

	// 引用必须有一个初始化的值, 不存在空引用
	int x { 3 }; 
	int& xRef { x };
	xRef = 10;
	int& emptyRef; // error, 不允许空引用.

	// 引用一旦创建, 就不能修改引用的对象
	int x { 3 }, y { 4 }; 
	int& xRef { x };  // xRef引用x, 那就一直引用x, 不能引用y
	xRef = y; // 把y赋值给xRef 只是把y的值(4) 传递给xRef, 此时 x和xRef 均为4

	// 引用只能引用已声明变量, 不能引用字面量
	int x {3};
	int& myRef { 3 }; //error 只能引用已声明变量, 不能引用字面量
	int& xRef { x }; // pass
	return 0;
}