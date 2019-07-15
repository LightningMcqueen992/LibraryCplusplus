#pragma once

class MyDate {
private: 
	int year;
	int day;
	int month;

public :
	MyDate();
	MyDate add(MyDate date, int addDay);
	bool inputDate();
	bool isEqual(MyDate date);
	bool isGreaterThan(MyDate dueDate);

};
