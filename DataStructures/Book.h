#include <string>
#include "MyDate.h"
#include "Resource.h"

class Book : public Resource {

private:
	std::string author;

public:
	bool inputResource(MyDate date);
};