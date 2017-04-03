#ifndef CUSTOMER_H
#define CUSTOMER_H

class Order;

class Customer: public Entity {
public:
	Customer(const std::string& name);
	~Customer();

	void addOrder(Order* newOrder);
	void showOrders();
};

std::ostream& operator<<(std::ostream& out, const Customer& customer);

#endif
