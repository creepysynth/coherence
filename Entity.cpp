#include "Entity.h"

Entity::Entity(const std::string& name) {
	this->name = name;
	this->entityContainer = new std::map<std::string, Entity*>();
}

Entity::~Entity() {
	delete entityContainer;
}

std::map<std::string, Entity*>* Entity::getEntityContainer() const {
	return entityContainer;
}

const std::string& Entity::getName() const {
	return name;
}

void Entity::addEntity(Entity* newEntity) {
	entityContainer->insert(std::pair<std::string, Entity*>(newEntity->getName(), newEntity));
}

void Entity::deleteEntity(Entity* entity) {
	if ( entityContainer->size() == 0 ) {
		throw EntityException("Entity container is empty!");
	}
	entityContainer->erase(entityContainer->find(entity->getName()));
}

void Entity::showEntities() const {
	std::map<std::string, Entity*>::iterator it;
	
	for ( it = entityContainer->begin(); it != entityContainer->end(); it++ ) {
	    std::cout << it->first << std::endl;
	}
}
