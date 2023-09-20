#pragma once

class Date
{
	int day;
	int month;
	int year;
public:
	Date();
	Date(int day, int month, int year);
	int EnterDay(Date date);
	void SetDay(int d);
	int GetDay();
	void SetMonth(int m);
	int GetMonth();
	void SetYear(int y);
	int GetYear();
	void Print(Date date);

	void Day(Date date);
	void Checkdate(Date date);

	Date& operator++();			//++a
	Date& operator++(int a);	//a++

	Date& operator--();			//--a
	Date& operator--(int a);	//a--

	Date& operator+(int a);		//obj + number
	Date& operator-(int a);		//obj - number
	Date& operator+(Date& obj);		//obj + obj

	Date& operator+=(int a);	//+=
	Date& operator-=(int a);	//-=

	bool operator>(Date& obj);		//>
	bool operator<(Date& obj);		//<
	bool operator>=(Date& obj);		//>=
	bool operator<=(Date& obj);		//<=
	bool operator!=(Date& obj);	//!=
	bool operator ==(Date& obj);	//==

};

