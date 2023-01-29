#include <iostream>
import airline_ticket;
#include "../format"
int main() {
	AirlineTicket myTicket;
	myTicket.setPassengerName('Z');
	myTicket.setNumberOfMiles(700);
	char name { myTicket.getPassengerName() };
	int miles { myTicket.getNumberOfMiles() };
	double totalCost { myTicket.calculatePriceInDollars() };
	std::cout 
	<< std::format("{}, Your total miles are {}, Your ticket's total cost is $ {}", name, miles, totalCost) 
	<< std::endl;
	return 0;
}