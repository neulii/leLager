#include "part.h"

Part::Part(std::string description)
{
	this->description = description;
}

void Part::setManufacturer( const char* manufacturer)
{
	this->manufacturer = manufacturer;



}

const std::string* Part::getManufacturer()
{
	return &this->manufacturer;
}

const std::string* Part::getDescription()
{
	return &this->description;
}

const std::string* Part::getOrderNumber()
{
	return &this->orderNumber;
}