#ifndef PART_H
#define PART_H

#include <iostream>

class Part {

	private:

	
		std::string manufacturer;
		std::string description;
		std::string orderNumber;

		std::string storage;
	

	public:

		Part(std::string description);
	
		const std::string* getManufacturer();
		const std::string* getDescription();
		const std::string* getOrderNumber();

		void Part::setManufacturer(const char* manufacturer);
};
#endif