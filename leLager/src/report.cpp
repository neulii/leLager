#include "report.h"


Report::Report(const char *reportTitle, neulib::Date *date, const char* reportText, const char* plant)
{
	this->startDate = date;
	this->reportText = reportText;
	this->reportTitle = reportTitle;
	this->plant = plant;
}

const char* Report::getPlant()
{
	return plant;
}

const char* Report::getReportText()
{
	return reportText;
}

const char* Report::getTitle()
{
	return reportTitle;
}

neulib::Date* Report::getDate()
{
	return startDate;

}