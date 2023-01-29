#include <iostream>
#include "../format"
using namespace std;

auto addFunction(int a, int b) {
	cout <<  format("EnterFunction: {}", __func__) << endl;	
	return a + b;
}

int  main(int argc, char const *argv[])
{
	addFunction(1, 2);
	return 0;
}