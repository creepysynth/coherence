#ifndef CATEGORY_H
#define CATEGORY_H

class Category: public Entity {
public:
	Category(const std::string& name);
	~Category();

	void addItem(Entity* newItem);
	void deleteItem(Entity* item);
	void showItems() const;
};

std::ostream& operator<<(std::ostream& out, const Category& category);

#endif
