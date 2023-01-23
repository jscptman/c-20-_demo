#include <iostream>
#include "../format"
#include <array>
using namespace std;

int main() {
	array rangeBaseArray {1, 2, 3, 4};
	size_t arraySize { rangeBaseArray.size() };

	//while 循环
	int i { 0 }; 
	while (i < arraySize) {
		cout << format(" {}", ++i);
		if(i == arraySize) cout << "\n" ;
	}

	// for循环
	for (int i { 0 }; i < arraySize;) { 
		cout << format(" {}", ++i);
		if(i == arraySize) cout << "\n" ;
	}

	// range-base for循环
	
	for (int times {}; int i : rangeBaseArray) {
		times++;
		cout << format(" {}", i);
		if(times == arraySize) cout << "\n"; 
	}

	return 0;
}
