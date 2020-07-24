#include "part.h"

Part::Part(const char* description)
{
	this->description = description;
}

void Part::setManufacturer( const char* manufacturer)
{
	this->manufacturer = manufacturer;
	
}

const char* Part::getManufacturer()
{
	return manufacturer;
}

const char* Part::getDescription()
{
	return description;
}

const char* Part::getOrderNumber()
{
	return orderNumber;
}

