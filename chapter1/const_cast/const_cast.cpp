// const_cast 你可以用它来向一个变量添加常量引用，或者抛开一个变量的常量引用。
//特别是当你使用第三方库时。因此，你有时需要抛开变量的常量性，但同样地，只有当你确信你所调用的函数不会修改该对象时，你才应该这样做.
#include <utility>

int main() {
void ThirdPartyLibraryMethod(char* str);

void f(const char* str) { 
	ThirdPartyLibraryMethod( std::const_cast<char*>(str));  // 去掉str的常量标识, 因为第三方库可能会修改这个指针的值
}
	return 0;
}