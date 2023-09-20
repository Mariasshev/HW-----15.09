#include "Date.h"
#include <windows.h>
#include <iostream>
using namespace std;

int main() {
	Date date;
	int month, year;
	do {
		cout << "Enter month (1-12): ";
		cin >> month;
	} while (month <= 0 || month > 12);
	date.SetMonth(month);	//set month first to check then right amount of days in each month
	date.SetDay(date.EnterDay(date));	//set day and check amount of days
	do {
		cout << "Enter year: ";
		cin >> year;
		if (year > 2023) {
			cout << "Now it is 2023 :)" << endl;
		}
	} while (year <= 1000 || year > 2023);
	date.SetYear(year);

	date.Print(date);	//to show user`s date


	++date;
	cout << "++date" << endl;
	date.Checkdate(date);
	date.Print(date);
	cout << endl;

	--date;
	cout << "--date" << endl;
	date.Checkdate(date);
	date.Print(date);
	cout << endl;


	Date date1 = date++;
	cout << "date1" << endl;
	date1.Print(date1);
	cout << "date++ ";
	date.Checkdate(date);
	date.Print(date);
	cout << endl;

	Date date2 = date--;
	cout << "date2" << endl;
	date2.Print(date2);
	cout << "date--: ";
	date.Checkdate(date);
	date.Print(date);
	cout << endl;

	date + 10;
	cout << "date + 10" << endl;
	date.Checkdate(date);
	date.Print(date);
	cout << endl;

	date - 5;
	cout << "date - 5" << endl;
	date.Checkdate(date);
	date.Print(date);
	cout << endl;

	date + date1;
	cout << "date + date1" << endl;
	date.Checkdate(date);
	date.Print(date);
	cout << endl;

	date += 10;
	cout << "date += 10" << endl;
	date.Checkdate(date);
	date.Print(date);
	cout << endl;

	date -= 5;
	cout << "date -= 5" << endl;
	date.Checkdate(date);
	date.Print(date);
	cout << endl;


	if (date > date1) {
		cout << "date > date1" << endl;
	}
	if (date < date1) {
		cout << "date < date1" << endl;
	}

	if (date >= date1) {
		cout << "date >= date1" << endl;
	}
	if (date <= date1) {
		cout << "date <= date1" << endl;
	}

	if (date != date1) {
		cout << "date != date1" << endl;
	}
	if (date == date1) {
		cout << "date == date1" << endl;
	}

}
