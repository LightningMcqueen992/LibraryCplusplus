#include "MyDate.h"
#include <iostream>
#include <string>

bool inputDate() {
	int input;

	do {
		std::cout << "Enter month - between 1 and 12: " ;
		if (std::cin >> input) {
			std::cout << "Hello I am here";
		}
		else {
			std::cout << "Hello I am false";
		}
	} while (input != 0);

}