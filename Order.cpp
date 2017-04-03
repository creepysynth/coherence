#include "Order.h"

int Order::globalIn = 1;

Order::Order(Customer* customer, Item* initialItem): Entity(toString(globalIn)) {
	this->in = globalIn;
	globalIn += 1;	
	this->customer = customer;
	this->customer->addOrder(this);
	this->entityContainer->insert(std::pair<std::string, Item*>(initialItem->getName(), initialItem));
	initialItem->addEntity(this);
}
Order::~Order() {}

Customer* Order::getCustomer() const {
	return customer;
}

void Order::addItem(Item* newItem) {
	this->addEntity(newItem);
	newItem->addEntity(this);
}

void Order::deleteItem(Item* item) {
	if ( entityContainer->size() <= 1 ) {
		throw EntityException("Order can not have no items!");
	}
	this->deleteEntity(item);
	item->deleteEntity(this);
}

std::string Order::toString(int number) {
    std::string result ;

    for ( ; number > 0; number /= 10 ) {
        result += number % 10 + 48;
    }
    result += "#";
    result = std::string(result.rbegin(), result.rend());
    
    return result;
}

void Order::showItems() const {
	showEntities();
}

std::ostream& operator<<(std::ostream& out, const Order& order) {
	out << "Order " << order.getName() << " (cust. \"" << order.getCustomer()->getName() << "\")" << std::endl;
	
	return out;
}
