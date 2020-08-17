#ifndef PART_H
#define PART_H

#include <iostream>

class Part {

	private:

		

		const char* manufacturer = "";
		const char* description = "";
		const char* orderNumber = "";
	
		const char* storage = "";
	

	public:

		Part(const char* description);
	
		const char* getManufacturer();
		const char* getDescription();
		const char* getOrderNumber();

		void setManufacturer(const char* manufacturer);
};
#endif