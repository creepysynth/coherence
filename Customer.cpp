#include "Customer.h"

Customer::Customer(const std::string& name): Entity(name) {}
Customer::~Customer() {}

void Customer::addOrder(Order* newOrder) {
	addEntity(newOrder);
}

void Customer::showOrders() {
	if ( entityContainer->size() == 0 ) {
		std::cout << "No orders made yet" << std::endl;
	} else {
		showEntities();
	}
}

std::ostream& operator<<(std::ostream& out, const Customer& customer) {
	out << "Customer \"" << customer.getName() << "\"" << std::endl;

	return out;
}
