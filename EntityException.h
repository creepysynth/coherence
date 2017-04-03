#ifndef ENTITYEXCEPTION_H
#define ENTITYEXCEPTION_H

class EntityException {
public:
	std::string warning;
	EntityException(const std::string& warning): warning(warning) {}
};

#endif
