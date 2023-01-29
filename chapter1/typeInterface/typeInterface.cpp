// 使用auto和decltype 关键字进行类型推断
int main() {
	const string message { "Test" };
	const string& foo() { return message; }
	auto f1 { foo() }; // auto会自动解除&和const, 所以f1的类型是string
	const auto& f2 { foo() };

	//在变量初始化时使用auto也有区别
	// Copy list initialization

	auto a = { 11 }; // initializer_list<int>

	auto b = { 11, 22 }; // initializer_list<int>

	// Direct list initialization
	auto c { 11 }; // int
	auto d { 11, 22 }; // Error, too many elements.

	//decltype 关键字 接受一个表达式, 并返回这个表达式的类型, 该关键字不会解除&和const

	int x { 123 }; 
	decltype(x) y { 456 };
}