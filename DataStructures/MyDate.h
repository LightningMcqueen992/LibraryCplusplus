

class MyDate {

private:
	int year;
	int day;
	int month;

public :
	MyDate();
	MyDate(int year, int day, int month);
	MyDate add (MyDate date, int addDay);
	bool inputDate(void);
	bool isEqual(MyDate date);
	bool isGreaterThan(MyDate dueDate);

};
