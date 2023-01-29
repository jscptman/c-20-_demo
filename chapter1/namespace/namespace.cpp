#include <iostream>
#include "../format"
using namespace std;

// normal namespace
namespace MyNameSpace {
	auto foo() {
		cout << "normal namespace" << endl;
	}
}

//nest namespace
namespace MyNameSpace::Networking::FTP {
	auto nestFoo() {
		cout << "nest namespace" << endl;
	}
}

// namespace alias 
 namespace MyFTP = MyNameSpace::Networking::FTP;

int main(int argc, char const *argv[])
{
	MyNameSpace::foo();
	MyNameSpace::Networking::FTP::nestFoo();
	MyFTP::nestFoo();
	return 0;
}
