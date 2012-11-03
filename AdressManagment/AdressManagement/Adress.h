#ifndef ADRESS_H
#define ADRESS_H

#include <string>
#include <list>
#include "Object.h"
#include "Person.h"

//#include "AdressManager.h"
//#include "IAdressManagerReader.h"

typedef std::list<Person*> TPersons;
typedef TPersons::iterator TPersonsItor;

class Adress :
	public Object
{
public:
	Adress();
	~Adress();
private:
	size_t mZipCode;
	std::string mCity;
	std::string mStreet;
	std::string mHouseNumber;
	TPersons mPersons;
};



#endif