#ifndef ENTITY_H
#define ENTITY_H

#include <iostream>
#include <map>
#include "EntityException.h"

class Entity {
protected:
	std::map<std::string, Entity*>* entityContainer;
	std::string name;
public:
	Entity(const std::string& name);
	~Entity();

	std::map<std::string, Entity*>* getEntityContainer() const;
	const std::string& getName() const;

	void addEntity(Entity* newEntity);
	void deleteEntity(Entity* entity);
	void showEntities() const;
};

#endif
