#include<iostream>
#include "Datee.h"
using namespace std;
//—оздайте класс дл€ хранени€ даты.ƒобавьте в класс соответствующие конструкторы, методы и аксессоры.

Date::Date()
{
	day = month = year = 0;
}

Date::Date(int d)
{
	day = d;
}

Date::Date(int d, int m) :Date(d)
{
	month = m;
}

Date::Date(int d, int m, int y) : Date(d, m)
{
	year = y;
}

void Date::Print()const
{
	if (month < 10)
	{
		cout << day << "/0" << month << "/" << year << endl;
	}
	else
	{
		cout << day << "/" << month << "/" << year << endl;
	}

}

void Date::SetDay(int p)
{
	cout << "Day:";
	cin >> day;
	cout << endl;
}

void Date::SetMonth(int p)
{
	cout << "Month:";
	cin >> month;
	cout << endl;
}

void Date::SetYear(int p)
{
	cout << "Year:";
	cin >> year;
	cout << endl;
}

void Date::GetDay()
{
	cout << "Day:" <<day << endl;
}

void Date::GetMonth()
{
	cout << "Month:" << month << endl;
}

void Date::GetYear()
{
	cout << "Year:" << year << endl;
}


Date Date::operator+(int b)
{
	Date zer;
	zer.day = day + b;
	zer.month = month;
	zer.year = year;
	return zer;
}

Date Date::operator-(int b)
{
	Date zer;
	zer.day - b;
	zer.month = month;
	zer.year = year;
	return zer;
}

Date& Date::operator+(const Date& b)
{
	day += b.day;
	month += b.month;
	year += b.year;
	return *this;
}

Date& Date::operator-(const Date& b)
{
	day -= b.day;
	month -= b.month;
	year -= b.year;
	return *this;
}

Date& Date::operator+=(int b)
{
	day += b;
	return*this;
}

Date& Date::operator-=(int b)
{
	day -= b;
	return*this;
}

bool Date::operator>(const Date& c)
{
	if (year > c.year)
	{
		return true;
	}
	else if (year == c.year)
	{
		if (month > c.month)
		{
			return true;
		}
		else if (month == c.month)
		{
			if (day > c.day)
			{
				return true;
			}
		}
	}
	return false;
}

bool Date::operator<(const Date& c)
{
	if (year < c.year)
	{
		return true;
	}
	else if (year == c.year)
	{
		if (month < c.month)
		{
			return true;
		}
		else if (month == c.month)
		{
			if (day < c.day)
			{
				return true;
			}
		}
	}

	return false;
}

bool Date::operator>=(const Date& c)
{
	if (year > c.year)
	{
		return true;
	}
	else if (year == c.year)
	{
		if (month > c.month)
		{
			return true;
		}
		else if (month == c.month)
		{
			if (day > c.day)
			{
				return true;
			}
			else if (year == c.year)
			{
				return true;
			}
		}
	}

	return false;
}

bool Date::operator<=(const Date& c)
{
	if (year < c.year)
	{
		return true;
	}
	else if (year == c.year)
	{
		if (month < c.month)
		{
			return true;
		}
		else if (month == c.month)
		{
			if (day < c.day)
			{
				return true;
			}
			else if (month == c.month)
			{
				return true;
			}
		}
	}
	return false;

}

bool Date::operator==(const Date& c)
{
	if (year == c.year && month == c.month && day == c.day)
	{
		return true;
	}
	else
	{
		return false;
	}


}

bool Date::operator!=(const Date& c)
{
	if (year != c.year && month != c.month && day != c.day)
	{
		return true;
	}
	else
	{
		return false;
	}
}
//-------------------------------------------------------
//functions 
Date& operator+(int a, const Date& b)//day+date
{
	Date rez;
	rez.SetDay(b.GetDay() + a);
	rez.SetMonth(b.GetMonth() + a);
	rez.SetYear(b.GetYear() + a);
	return rez;
}
Date& operator-(int a, const Date& b)//day-date
{
	Date rez;
	rez.SetDay(b.GetDay() - a);
	rez.SetMonth(b.GetMonth() - a);
	rez.SetYear(b.GetYear() - a);
	return rez;
}
Date& operator-(const Date& a, const Date& b) //date-date
{
	Date zer;
	zer.SetDay(a.GetDay() - b.GetDay());
	zer.SetMonth(a.GetMonth() - b.GetMonth());
	zer.SetYear(a.GetYear() - b.GetYear());
}
Date& operator+=(Date& obj, int a) // date+=day
{
	obj.SetDay(obj.GetDay() + a);
	obj.SetMonth(obj.GetMonth() + a);
	obj.SetYear(obj.GetYear() + a);
}
Date& operator-=(Date& obj, int a) // date-=day
{
	obj.SetDay(obj.GetDay() - a);
	obj.SetMonth(obj.GetMonth() - a);
	obj.SetYear(obj.GetYear() - a);
}
bool operator<(const Date& a, const Date& b) // //date<date
{
	if (a.GetDay() < b.GetDay() && a.GetMonth() < b.GetMonth() && a.GetYear() < b.GetYear)
	{
		return true;
	}
	return false;
}
bool operator>(const Date& a, const Date& b) // //date>date
{
	if (a.GetDay() > b.GetDay() && a.GetMonth() > b.GetMonth() && a.GetYear() > b.GetYear)
	{
		return true;
	}
	return false;
}
bool operator<=(Date& a, Date& b) // //date>=date
{
	if (a.GetDay() < b.GetDay())
	{
		return true;
	}
	else if (a.GetDay() == b.GetDay())
	{
		return false;
	}
	if (a.GetMonth() < b.GetMonth())
	{
		return true;
	}
	else if (a.GetMonth() == b.GetMonth())
	{
		return false;
	}
	if (a.GetYear() < b.GetYear())
	{
		return true;
	}
	else if (a.GetYear() == b.GetYear())
	{
		return false;
	}
}
bool operator>=(Date& a, Date& b) // //date>=date
{
	if (a.GetDay() > b.GetDay())
	{
		return true;
	}
	else if (a.GetDay() == b.GetDay())
	{
		return false;
	}
	if (a.GetMonth() > b.GetMonth())
	{
		return true;
	}
	else if (a.GetMonth() == b.GetMonth())
	{
		return false;
	}
	if (a.GetYear() > b.GetYear())
	{
		return true;
	}
	else if (a.GetYear() == b.GetYear())
	{
		return false;
	}
}
bool operator==(const Date& a, const Date& b) // //date==date
{
	if (a.GetDay() == b.GetDay() && a.GetMonth() == b.GetMonth() && a.GetYear() == b.GetYear)
	{
		return true;
	}
	return false;
}
bool operator!=(const Date& a, const Date& b) // //date!=date
{
	if (a.GetDay() != b.GetDay() && a.GetMonth() != b.GetMonth() && a.GetYear() != b.GetYear)
	{
		return true;
	}
	return false;
}
Date& operator++(Date& b, int a) //++
{
	Date zer(b);
	b.SetDay(b.GetDay() + 5);
	return zer;
}
Date& operator--(Date& b, int a)//--
{
	Date zer(b);
	b.SetDay(b.GetDay() - 5);
	return zer;
}
int main()
{
	Date a(14, 9, 2022);
	a.Print();

}
