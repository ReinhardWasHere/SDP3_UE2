#ifndef ADRESS_H
#define ADRESS_H

#include <string>
#include "AdressManager.h"

class Adress :
	public Object 
{
private:
	size_t mZipCode;
	std::string mCity;
	std::string mStreet;
	std::string mHouseNumber;
	TPersons mPersons;
}

#endif