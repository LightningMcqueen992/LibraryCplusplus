#include <string>
#include "Resource.h"

class Book : public Resource {

private:
	std::string author;

public:
	Book();
	bool inputResource(MyDate date);
};