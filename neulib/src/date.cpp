#include "date.h"
#include "main_lib.h"
#include <iostream>

namespace neulib
{
	Date::Date() : day(1), month(1), year(2000)
	{

	}

	Date::Date(int day, int month, int year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	
int Date::getDay()
	{
		return day;
	}

	int Date::getMonth()
	{
		return month;
	}

	int Date::getYear()
	{
		return year;
	}

	std::string Date::dateToString()
	{
		std::string stringDate = "";

		stringDate = std::to_string(day) + "/" +  std::to_string(month) + "/" + std::to_string(year);

		return stringDate.c_str();
	}
}