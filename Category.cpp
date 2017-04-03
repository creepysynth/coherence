#include "Category.h"

Category::Category(const std::string& name): Entity(name) {}
Category::~Category() {}

void Category::addItem(Entity* newItem) {
	addEntity(newItem);
}

void Category::deleteItem(Entity* item) {
	deleteEntity(item);	
}

void Category::showItems() const {
	if ( entityContainer->size() == 0 ) {
		std::cout << "No items in this category" << std::endl;
	} else {
	    showEntities();
	}
}

std::ostream& operator<<(std::ostream& out, const Category& category) {
	out << "Category \"" << category.getName() << "\"" << std::endl;

	return out;
}
