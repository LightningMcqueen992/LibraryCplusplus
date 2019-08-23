
#include <string>
#include "MyDate.h"

class Resource {
protected:
	std::string title;
	std::string borrower;
	MyDate dueDate;
	float overdueCost;

public:
	Resource();
	bool inputResource(MyDate date);
	bool isOverDue(MyDate date);
	
};
