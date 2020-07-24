#include "date.h"
#include "main_lib.h"
#include <iostream>


namespace neulib
{
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

	const char* Date::dateToString()
	{
		std::string stringDate = "";

		stringDate = neulib::intToC_String(day);

		

		
		return stringDate.c_str();
	}
}