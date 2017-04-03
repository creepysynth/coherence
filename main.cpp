#include "Entity.cpp"
#include "Category.cpp"
#include "Item.cpp"
#include "Order.cpp"
#include "Customer.cpp"

int main() {
	Category* civil = new Category("Civil aircrafts");
	Category* military = new Category("Military aircrafts");
	Item* Boeing = new Item("B747", civil);
	Item* Airbus = new Item("A320", civil);
	Item* Lockheed = new Item("C130", military);
	Item* Cessna = new Item("C172", civil);
	Customer* customer = new Customer("John F. Kennedy International Airport");
	Order* order1 = new Order(customer, Cessna);
	Order* order2 = new Order(customer, Lockheed);
	
	std::cout << *civil;
	civil->showItems();
	std::cout << *military;
	military->showItems();
	std::cout << std::endl;
	
	std::cout << *Boeing;
	std::cout << *Airbus;
	std::cout << *Lockheed;
	std::cout << *Cessna;
	std::cout << *customer;
	std::cout << *order1;
	order1->showItems();
	std::cout << *order2;
	order2->showItems();
	std::cout << "--------------------------" << std::endl;
	
	Lockheed->changeCategory(civil);
	
	std::cout << *civil;
	civil->showItems();
	std::cout << std::endl;
	std::cout << *military;
	military->showItems();
	std::cout << "--------------------------" << std::endl;
	
	order1->addItem(Lockheed);
	order1->deleteItem(Cessna);
	order2->addItem(Cessna);
	order2->addItem(Airbus);
	
	std::cout << *order1;
	order1->showItems();
	std::cout << *order2;
	order2->showItems();
	
	delete civil;
	delete military;
	delete Boeing;
	delete Airbus;
	delete Lockheed;
	delete Cessna;
	delete customer;
	delete order1;
	delete order2;;

	return 0;
}
