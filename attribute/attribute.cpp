#include <iostream>
#include "../format"

using namespace std;
// [[nodiscard]] 当函数返回值没有被使用时向编辑器发出警告
[[nodiscard]] int add(int a, int b) {
	return a + b;
}


// [[maybe_unused]] 当编辑器警告级别设置的较高时, 函数中未使用的参数将会发出警告, 该attribute用来阻止这一行为
// The [[maybe_unused]] attribute can be used on classes and structs, non-static data members, unions, typedefs, type aliases, variables, functions, enumerations, and enumeration values
void fetchData(int param, [[maybe_unused]] int options) {
	// doFetch with param...
}

// [[noreturn]] 用来告知编译器这个函数可能会非正常退出或没有返回值
[[noreturn]] void foreProgramTermination() {
	exit(1);
}

bool isDongleAvailable() {
	bool isAvailable { false };
	return isAvailable;
}

bool isFeatureLicensed(int featureId) {
	if (!isDongleAvailable()) {
		foreProgramTermination(); // 如果这个函数没有[[noreturn]] 则编译器会在最外层函数报错: warning C4715: 'isFeatureLicensed': not all control paths return a value
	} else {
		bool isLicensed { featureId == 42 };
		return isLicensed;
	}
}

// [[deprecated]] 用来告知编译器这个方法已经过时, 如果还是调用该方法, 会获得过时警告.
[[deprecated("Unsafe method, please use xxxx")]] void deprecatedFunction() {};


int main(int argc, char const *argv[]) {
	int testValue { 11 };
	add(1, 2);
	// bool isLicensed { isFeatureLicensed(42) };
	deprecatedFunction();

// [[likely]] and [[unlikely]] 用来告诉编译器某个条件分支是很有可能(或不太可能)被执行的, 一般不需要使用这组attribute, 因为编译器有自我判断的能力, 除非在性能极其需要优化时使用
	if (testValue > 11) [[unlikely]] {
		// unlikely exec
	} else {
		// do something
		cout << "lallala" << endl;
	}

	switch (testValue) {

	[[likely]] case 11:
		// do something
		cout << "fallthrough\n";
		[[fallthrough]] // [[fallthrough]] 用来告知编译器这个switch 分支是有意不使用break;
	[[unlikely]] case 1:
		// unlikely exec
		cout << "fallthrough to case1\n";
		break;
	default:
		cout << "default case";
		break;
	}
	return 0;
}