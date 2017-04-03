#ifndef ORDER_H
#define ORDER_H

#include "Customer.h"

class Order: public Entity {
private:
	Customer* customer;
	static int globalIn;
	int in;

	std::string toString(int number);
public:
	Order(Customer* customer, Item* initialItem);
	~Order();

	Customer* getCustomer() const;

	void addItem(Item* newItem);
	void deleteItem(Item* item);
	void showItems() const;
};

std::ostream& operator<<(std::ostream& out, const Customer& customer);

#endif
