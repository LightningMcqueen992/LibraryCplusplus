#include <iostream>
#include <string>
#include "Resource.h"


Resource::Resource() {

}

bool Resource::inputResource(MyDate date) {
	std::cout << "Enter title being borrowed (No spaces) " << std::endl;
	std::cin >> Resource::title;

	std::cout << "Enter borrower name (No spaces) " << std::endl;
	std::cin >> Resource::borrower;

	return true;
}

bool Resource::isOverDue(MyDate date) {
	return false;
}
