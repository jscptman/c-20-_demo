#include <iostream>
#include "../format"

using namespace std;

int main() {
	// 能够在括号内进行变量初始化,  变量作用域仅限在if-elseIf-else scope
	if(int initalValue { 0 }; initalValue > 0 ) {
		cout << "greater than zero\n";
	}else {
		cout << "lessOrEqual than zero\n";
	}


	// 同上
	switch(int initalValue { 1 }; initalValue) {
		case 0:
			cout << "initalValue is 0\n";
			break;
		case 1:
			cout << "initalValue is 1\n";
			break;
	}
	
	return 0;
}	