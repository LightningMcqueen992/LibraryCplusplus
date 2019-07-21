#include "MyDate.h"
#include <iostream>
#include <string>

MyDate::MyDate() {

}

MyDate::MyDate(int year, int day, int month) {
	this->year = year;
	this->day = day;
	this->month = month;
}

bool MyDate::inputDate(void) {
	int input;

	do {
		std::cout << "Enter month - between 1 and 12: ";
		if (std::cin >> input) {
			this->month = input;
		}
		else {
			std::cout << "Invalid month input";
		}
		
	} while (this->month <=0 || this->month > 12);

	return true;

}

MyDate MyDate::add(MyDate date, int addDay) {
	int typeMonth;

	if (this->month == 4 || this->month == 6 || this->month == 9 || this->month == 11) {

		typeMonth = 30;
	}
	else {

	}
}

bool MyDate::isEqual(MyDate date) {

	if (this->year == date.year && this->month == date.month && this->day == date.day) {
		return true;
	}
	return false;
}

bool MyDate::isGreaterThan(MyDate dueDate) {
	if (MyDate::isEqual(dueDate)) {
		return false;
	}

}


