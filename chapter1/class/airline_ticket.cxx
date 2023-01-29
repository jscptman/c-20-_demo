module;
// 一般类是使用模块的形式实现的
// 模块的声明文件
export module airline_ticket;

export class AirlineTicket
{
public:
	AirlineTicket(); // 初始化时的钩子
	~AirlineTicket(); // 构造函数实例销毁时, 调用的销毁钩子

	double calculatePriceInDollars();

	char getPassengerName();
	void setPassengerName(char name);

	int getNumberOfMiles();
	void setNumberOfMiles(int miles);

	bool hasVipStatus();
	void setHasVipStatus(bool status);

private:
	char m_passengerName { 'z' }; // 可以在这里初始化私有数据
	int m_numberOfMiles { 0 };
	bool m_hasVipStatus { false };
};