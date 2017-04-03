#ifndef ITEM_H
#define ITEM_H

class Item: public Entity {
private:
	Category* category;
	static int globalSn;
	int sn;	
public:
	Item(const std::string& name, Category* category);
	~Item();

	Category* getCategory() const;
	int getSn() const;
	
	void changeCategory(Category* newCategory);
	void showOrders() const;
};

std::ostream& operator<<(std::ostream& out, const Item& item);

#endif
