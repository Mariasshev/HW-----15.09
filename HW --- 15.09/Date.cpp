#include "Date.h"
#include <iostream>
using namespace std;


int Date::GetDay()
{
	return this->day;
}
void Date::SetDay(int d)
{
	this->day = d;
}
void Date::SetMonth(int m)
{
	this->month = m;
}

int Date::GetMonth()
{
	return this->month;
}

void Date::SetYear(int y)
{
	this->year = y;
}

int Date::GetYear()
{
	return this->year;
}

void Date::Print(Date date)
{
	cout << "PRINT" << endl;
	cout << "Your date: " << date.GetDay() << "/" << date.GetMonth() << "/" << date.GetYear() << endl;
}

Date& Date::operator++()//++a
{
	this->day += 20;
	return *this;
}

Date& Date::operator--()//--a
{
	this->day -= 20;
	return *this;
}

Date& Date::operator++(int a)//a++
{
	Date temp(day + 10, month, year);
	return temp;
}

Date& Date::operator--(int a)//a--
{
	Date temp(day - 10, month, year);
	return temp;
}

Date& Date::operator+(int a)
{
	this->day += a;
	return *this;
}

Date& Date::operator-(int a)
{
	this->day -= a;
	return *this;
}

Date& Date::operator+(Date& obj)
{
	this->day += obj.day;
	this->month += obj.month;
	this->year += obj.year;
	do {
		this->month = this->month - 12;
		++this->year;
	} while (this->month > 12);
	return *this;
}

Date& Date::operator+=(int a)
{
	this->day += a;
	return *this;
}

Date& Date::operator-=(int a)
{
	this->day -= a;
	return *this;
}

bool Date::operator>( Date& obj)
{
	if (this->day > obj.day && this->month > obj.month && this->year > obj.year) {
		return true;
	}
	else {
		return false;
	}

}

bool Date::operator<(Date& obj)
{
	if (this->day < obj.day && this->month < obj.month && this->year < obj.year) {
		return true;
	}
	else {
		return false;
	}
}

bool Date::operator>=(Date& obj)
{
	if (this->day >= obj.day && this->month >= obj.month && this->year >= obj.year) {
		return true;
	}
	else {
		return false;
	}
}

bool Date::operator<=(Date& obj)
{
	if (this->day <= obj.day && this->month <= obj.month && this->year <= obj.year) {
		return true;
	}
	else {
		return false;
	}
}

bool Date:: operator!=(Date& obj)
{
	if (this->day != obj.day && this->month != obj.month && this->year != obj.year) {
		return true;
	}
	else {
		return false;
	}
}

bool Date::operator==(Date& obj)
{
	if (this->day == obj.day && this->month == obj.month && this->year == obj.year) {
		return true;
	}
	else {
		return false;
	}
}



void Date::Checkdate(Date date)
{
	cout << "CHECK DATE" << endl;
	switch (date.month)
	{
		case 1: 
			if (this->day > 31) {
				this->month++;
				this->day = this->day - 31;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 2:
			if (this->day > 28) {
				++this->month;
				this->day = this->day - 28;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 3:		//March(31)
			if (this->day > 31) {
				this->month++;
				this->day = this->day - 31;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 4:		//30
			if (this->day > 30) {
				this->month++;
				this->day = this->day - 30;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 5:	//May(31)
			if (this->day > 31) {
				this->month++;
				this->day = this->day - 31;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 6:	//June(30)
			if (this->day > 30) {
				this->month++;
				this->day = this->day - 30;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 7:	//July(31)
			if (this->day > 31) {
				this->month++;
				this->day = this->day - 31;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 8:	//August(31)
			if (this->day > 31) {
				this->month++;
				this->day = this->day - 31;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 9:	//September(30)
			if (this->day > 30) {
				this->month++;
				this->day = this->day - 30;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 10:	//October(31)
			if (this->day > 31) {
				this->month++;
				this->day = this->day - 31;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 11:	//November(30)
			if (this->day > 30) {
				this->month++;
				this->day = this->day - 30;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
		case 12:	//December(31)
			if (this->day > 31) {
				this->month++;
				this->day = this->day - 31;
			}
			if (this->day < 1 || this->day == 0) {
				--this->month;
				Day(date);
			}
			if (this->month > 12) {
				++this->year;
				this->month = this->month - 12;
			}
			if (this->month < 1) {
				--this->year;
				this->month += 12;
			}
			break;
	}
}


void Date::Day(Date date)
{

	switch (date.month)
	{
	case 1:	//31
		this->day += 30;
		break;
	case 2:	//28
		this->day += 28;
		break;
	case 3:		//March(31)
		this->day += 31;
		break;
	case 4:		//30
		this->day += 30;
		break;
	case 5:	//May(31)
		this->day += 31;
		break;
	case 6:	//June(30)
		this->day += 30;
		break;
	case 7:	//July(31)
		this->day += 31;
		break;
	case 8:	//August(31)
		this->day += 31;
		break;
	case 9:	//September(30)
		this->day += 30;
		break;
	case 10:	//October(31)
		this->day += 31;
		break;
	case 11:	//November(30)
		this->day += 30;
		break;
	case 12:	//December(31)
		this->day += 31;
		break;
	}
}


Date::Date()
{
	this->day = 0; 
	this->month = 0;
	this->year = 0;
}

Date::Date(int day, int month, int year)
{
	this->day = day;
	this->month = month;
	this->year = year;
}

int Date::EnterDay(Date date)
{
	int day;
	switch (date.month)
	{
	case 1:	//January(31)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 31) {
				cout << "There are only 31 days in January!" << endl;
			}
		} while (day <= 0 || day > 31);
		return day;
		break;
	case 2:	//February(28)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 28) {
				cout << "There are only 28 days in February!" << endl;
			}
		} while (day <= 0 || day > 28);
		return day;
		break;
	case 3:	//March(31)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 31) {
				cout << "There are only 31 days in March!" << endl;
			}
		} while (day <= 0 || day > 31);
		return day;
		break;
	case 4:	//April(30)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 30) {
				cout << "There are only 30 days in April!" << endl;
			}
		} while (day <= 0 || day > 30);
		return day;
		break;
	case 5:	//May(31)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 31) {
				cout << "There are only 31 days in May!" << endl;
			}
		} while (day <= 0 || day > 31);
		return day;
		break;
	case 6:	//June(30)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 30) {
				cout << "There are only 30 days in June!" << endl;
			}
		} while (day <= 0 || day > 30);
		return day;
		break;
	case 7:	//July(31)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 31) {
				cout << "There are only 31 days in July!" << endl;
			}
		} while (day <= 0 || day > 31);
		return day;
		break;
	case 8:	//August(31)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 31) {
				cout << "There are only 31 days in August!" << endl;
			}
		} while (day <= 0 || day > 31);
		return day;
		break;
	case 9:	//September(30)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 30) {
				cout << "There are only 30 days in September!" << endl;
			}
		} while (day <= 0 || day > 30);
		return day;
		break;
	case 10:	//October(31)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 31) {
				cout << "There are only 31 days in October!" << endl;
			}
		} while (day <= 0 || day > 31);
		return day;
		break;
	case 11:	//November(30)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 30) {
				cout << "There are only 30 days in November!" << endl;
			}
		} while (day <= 0 || day > 30);
		return day;
		break;
	case 12:	//December(31)
		do {
			cout << "Enter day: ";
			cin >> day;
			if (day > 31) {
				cout << "There are only 31 days in December!" << endl;
			}
		} while (day <= 0 || day > 31);
		return day;
		break;
	default:
		break;
	}
}

