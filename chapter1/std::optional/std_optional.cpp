#include <optional>
#include <iostream>
#include "../format"
using namespace std;
// optional 用来告知编译器, 某个函数可能包含(或不包含)返回值
optional<int> getData(bool giveIt) {
	if(giveIt) {
		return 42;
	}
	return nullopt;
}

int main() {

	optional<int> data { getData(false) };

	if(data.has_value()) {
		cout << data.value() << endl;
	} else {
		cout << "'data is null' "<< endl;
	}
	return 0;
}