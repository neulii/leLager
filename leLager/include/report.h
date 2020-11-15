#ifndef REPORT_H
#define REPORT_H

#include "include/date.h"
#include <string>

class Report
{

private:

	enum class ReportState
	{
		Open,
		Closed
	};

	const char* reportTitle;
	const char* reportText;

	const char* plant;

	ReportState reportState;

	neulib::Date *startDate;

public:

	Report(const char *reportTitle, neulib::Date *date,const char* reportText, const char *plant);

	const char* getPlant();
	const char* getTitle();
	const char* getReportText();
	neulib::Date* getDate();


	
};



#endif
