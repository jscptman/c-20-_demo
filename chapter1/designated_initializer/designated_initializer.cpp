// designated_initializer可以看成是uniform_initialization的一个扩展语法, 它意在让初始化更具语义化, 更加便于维护. 

int main () {

	//声明一个struct
	struct Employee {
		char firstInitial; 
		char lastInitial; 
		int employeeNumber; 
		int salary { 75'000 }; // 可以给一个默认值, 75000 
	};

	// 使用uniform_initialization语法创建一个实例:
	Employee anEmployeeByUniform { 'J', 'D', 42, 80'000 };

//使用designated_initializer有以下几个限制:
	// 1: 初始化数据类型, 应该为 数组, 结构体, 类(只有公共数据成员, 没有用户声明的或继承的构造函数, 没有虚拟函数, 没有虚拟、私有或保护的基类)
	// 2: 初始化参数的顺序, 必须和声明中的参数顺序一致(可以跳过某个参数,但整体必须顺序一致)
	//使用designated_initializer 语法创建一个实例:
	Employee anEmployeeByDesignated {
		.firstInitial = 'J',
		.lastInitial = 'D', 
		.employeeNumber = 42,
		.salary = 80'000
	};

	return 0;
}