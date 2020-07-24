#include "report.h"
#include "include/date.h"

class Report
{

private:

	const char* reportTitle;
	const char* reportText;

	const char* plant;
	
	neulib::Date startDate;

public:

	Report(const char* reportTitle,neulib::Date date, const char* reportText);






};