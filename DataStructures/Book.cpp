#include <iostream>
#include <string>
#include "Book.h"

Book::Book() {
	Book::overdueCost = 2.00;
}

bool Book::inputResource(MyDate date) {

	Resource::inputResource(date);

	std::cout << "Enter the author name (no spaces)" << std::endl;
	std::cin >> overdueCost;

	return true;

}