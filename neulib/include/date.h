#ifndef DATE_H
#define DATE_H

#include <string>

namespace neulib {

	class Date
	{

	private:

		int day;
		int month;
		int year;

	public:

		Date();
		Date(int day, int month, int year);

		int getDay();
		int getMonth();
		int getYear();

		std::string dateToString();
		
	};


}



#endif