#include <iostream>
#include <limits>
#include <string>
//#include "Resource.h"
#include "Book.h"

int main() {

	int input;
	MyDate * date = new MyDate();
	Resource * item;

	do {
		
		std::string menu = "\nEnter:\n1 to add resources\n2 to display overdue items\n3 to display all resources\n4 to delete a resource\n5 to change todays date\n6 to display current date\n7 to quit\n";

		std::cout << menu;
		std::cin >> input;

		if (!std::cin) {
			std::cout << "Bad input" << std::endl;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}

		switch (input) {

		case 1: std::cout << "You chose 1\n";
			date->inputDate();
			
			item = new Book();
			item->inputResource(*date);

			break;
		case 2: std::cout << "You chose 2\n";
			break;
		case 3: std::cout << "You chose 3\n";
			break;
		case 4: std::cout << "You chose 4\n";
			break;
		case 5: std::cout << "You chose 5\n";
			break;
		case 6: std::cout << "You chose 6\n";
			break;
		case 7: std::cout << "You chose 7\n";
			break;
		default: std::cout << "Unknown input\n";
			break;
		}
	} while (input != 7);

	return 0;
}