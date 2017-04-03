#include "Item.h"

int Item::globalSn = 0;

Item::Item(const std::string& name, Category* category): Entity(name) {
	this->category = category;
	this->category->addItem(this);
	this->sn = globalSn;
	globalSn += 1;
}
Item::~Item() {}

Category* Item::getCategory() const {
	return category;
}

int Item::getSn() const {
	return sn;
}

void Item::changeCategory(Category* newCategory) {
	if ( newCategory != NULL ) {
		category->deleteItem(this);
		category = newCategory;
		category->addItem(this);
	}
}

void Item::showOrders() const {
	if ( entityContainer->size() == 0 ) {
		std::cout << "No orders for this item" << std::endl;
	} else {
		showEntities();
	}
}

std::ostream& operator<<(std::ostream& out, const Item& item) {
	out << "Item \"" << item.getName() << "\"" << " (cat. \"" << item.getCategory()->getName() << "\")" << std::endl;

	return out;
}
