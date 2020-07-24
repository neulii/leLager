#ifndef DATE_H
#define DATE_H

namespace neulib {

	class Date
	{

	private:
		int day;
		int month;
		int year;

	public:

		Date(int day, int month, int year);

		int getDay();
		int getMonth();
		int getYear();

		const char* dateToString();

	};


}



#endif